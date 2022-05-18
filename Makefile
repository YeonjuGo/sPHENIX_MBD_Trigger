# Make sure that WD_BASEDIR points to the right place
WD_BASEDIR=/usr/share/windriver/

# Comment/uncomment to enable/disable debugging code
DEBUG = 1

ifeq ($(DEBUG),1)
    DEBFLAGS = -g -O -DDEBUG
else
    DEBFLAGS = -O2
endif

ifndef TARGET_CPU
	TARGET_CPU=$(shell uname -m | sed 's/i.86/i386/' | sed 's/ppc/PPC/' | sed 's/ia64/IA64/')
endif
ifeq ("$(TARGET_CPU)", "PPC")
	CFLAGS += -DPOWERPC
endif

ifeq ("$(TARGET_CPU)", "IA64")
	CFLAGS += -DKERNEL_64BIT
endif

ifeq ("$(TARGET_CPU)", "PPC64")
	CFLAGS += -DKERNEL_64BIT
	ifndef USER_BITS
		USER_BITS = 64
	endif
	CFLAGS += -m$(USER_BITS)
	LFLAGS += -m$(USER_BITS)
endif

ifeq ("$(TARGET_CPU)", "x86_64")
	CFLAGS += -DKERNEL_64BIT
	ifndef USER_BITS
		USER_BITS = 64
	endif
	CFLAGS += -m$(USER_BITS)
	LFLAGS += -m$(USER_BITS)
endif

CFLAGS += -DLINUX $(DEBFLAGS) -Wall -I$(PWD) -I$(WD_BASEDIR)
CFLAGS += -DWD_DRIVER_NAME_CHANGE
LFLAGS += -lwdapi1480 -L$(PWD)/lib
LFLAGS += -lpthread

# TARGET = bin/sphenix_adc_test_jseb2
# TARGET = bin/sphenix_adc_test_chi
TARGET = bin/sphenix_adc_test_chi_temp

LLIBS = src/jseb2_lib.c
LOBJS = $(addsuffix .o, $(addprefix lib/, $(basename $(notdir $(LLIBS)))))

WLIBS = $(WD_BASEDIR)/diag_lib.c $(WD_BASEDIR)/wdc_diag_lib.c
WOBJS = $(addsuffix .o, $(addprefix lib/wd/, $(basename $(notdir $(WLIBS)))))

OBJS = $(LOBJS) $(WOBJS)

all: mkdir $(TARGET)

mkdir:
	@mkdir -p $(PWD)/bin $(PWD)/lib $(PWD)/lib/wd

$(TARGET): src/sphenix_adc_test_chi_temp.c $(OBJS)
# $(TARGET): src/sphenix_adc_test_chi.c $(OBJS)
# $(TARGET): src/sphenix_adc_test_jseb2.c $(OBJS)
	$(CC) -std=c99 $(CFLAGS) -o $@ $< $(OBJS) $(LFLAGS)

lib/%.o: src/%.c
	$(CC) -std=c99 -c $(CFLAGS) -o $@ $<

lib/wd/%.o: $(WD_BASEDIR)/%.c
	$(CC) -std=c99 -c $(CFLAGS) -o $@ $<

clean:
	rm -r bin lib
