#ifndef SPHENIX_H
#define SPHENIX_H

#define poweroff        0x0
#define poweron         0x1
#define configure_s30   0x2
#define configure_s60   0x3
#define configure_cont 0x20
#define rdstatus       0x80
#define loopback       0x04

#define dcm2_run_off           254
#define dcm2_run_on            255

#define dcm2_online              2
#define dcm2_setmask             3
#define dcm2_offline_busy        4
#define dcm2_load_packet_a      10
#define dcm2_load_packet_b      11
#define dcm2_offline_load        9
#define dcm2_status_read        20
#define dcm2_led_sel            29
#define dcm2_buffer_status_read 30
#define dcm2_status_read_inbuf  21
#define dcm2_status_read_evbuf  22
#define dcm2_status_read_noevnt 23
#define dcm2_zero               12
#define dcm2_compressor_hold    31

#define dcm2_5_readdata          4
#define dcm2_5_firstdcm          8
#define dcm2_5_lastdcm           9
#define dcm2_5_status_read       5
#define dcm2_5_source_id        25
#define dcm2_5_lastchnl         24

#define dcm2_packet_id_a        25
#define dcm2_packet_id_b        26
#define dcm2_hitformat_a        27
#define dcm2_hitformat_b        28

#define dcm2_cal_thresh1_add    55
#define dcm2_cal_thresh2_add    56
#define dcm2_cal_thresh1_data   57
#define dcm2_cal_thresh2_data   58
#define dcm2_cal_thresh1_write  59
#define dcm2_cal_thresh2_write  60
#define dcm2_cal_nfem1          61
#define dcm2_cal_nfem2          62
#define dcm2_cal_nsmpl1         63
#define dcm2_cal_nsmpl2         64
#define dcm2_cal_nfem_pass1     65
#define dcm2_cal_nfem_pass2     66

#define dcm2_n_cal_fst      0x80000000
#define dcm2_n_cal_p_head   0x90000000
#define dcm2_n_cal_fem_head 0xa0000000
#define dcm2_n_cal_smpl     0x30000000
#define dcm2_n_cal_lst      0x20000000
#define dcm2_n_cal_chnl     0x10000000

#define part_run_off    254
#define part_run_on     255
#define part_online       2
#define part_offline_busy 3
#define part_offline_hold 4
#define part_status_read 20
#define part_source_id   25

#define adc_cntrl_int          0x0
#define adc_cntrl_loopback_on  0x1
#define adc_cntrl_loopback_off 0x2
#define adc_cntrl_offline      0x3
#define adc_cntrl_online       0x4

#define mb_cntrl_add           0x1
#define mb_cntrl_test_on       0x1
#define mb_cntrl_test_off      0x0
#define mb_cntrl_set_run_on    0x2
#define mb_cntrl_set_run_off   0x3
#define mb_cntrl_set_trig1     0x4
#define mb_cntrl_set_trig2     0x5
#define mb_cntrl_load_frame    0x6
#define mb_cntrl_load_trig_pos 0x7

#define mb_feb_power_add       0x1
#define mb_feb_conf_add        0x2
#define mb_feb_pass_add        0x3

#define mb_feb_lst_on          1
#define mb_feb_lst_off         0
#define mb_feb_rxreset         2
#define mb_feb_align           3

#define mb_feb_adc_align       1
#define mb_feb_a_nocomp        2
#define mb_feb_b_nocomp        3
#define mb_feb_blocksize       4
#define mb_feb_timesize        5
#define mb_feb_mod_number      6
#define mb_feb_a_id            7
#define mb_feb_b_id            8
#define mb_feb_max             9

#define mb_feb_test_source    10
#define mb_feb_test_sample    11
#define mb_feb_test_frame     12
#define mb_feb_test_channel   13
#define mb_feb_test_ph        14
#define mb_feb_test_base      15
#define mb_feb_test_ram_data  16

#define mb_feb_a_test         17
#define mb_feb_b_test         18

#define mb_feb_a_rdhed        21
#define mb_feb_a_rdbuf        22
#define mb_feb_b_rdhed        23
#define mb_feb_b_rdbuf        24

#define mb_feb_read_probe     30
#define mb_feb_adc_reset      33

#define mb_a_buf_status       34
#define mb_b_buf_status       35
#define mb_a_ham_status       36
#define mb_b_ham_status       37

#define mb_feb_a_maxwords     40
#define mb_feb_b_maxwords     41

#define mb_feb_hold_enable    42

#define mb_pmt_adc_reset       1
#define mb_pmt_spi_add         2
#define mb_pmt_adc_data_load   3

#define mb_xmit_conf_add         0x2
#define mb_xmit_pass_add         0x3

#define mb_xmit_modcount         0x1
#define mb_xmit_enable_1         0x2
#define mb_xmit_enable_2         0x3
#define mb_xmit_test1            0x4
#define mb_xmit_test2            0x5

#define mb_xmit_testdata          10

#define mb_xmit_rdstatus          20
#define mb_xmit_rdcounters        21
#define mb_xmit_link_reset        22
#define mb_opt_dig_reset          23
#define mb_xmit_dpa_fifo_reset    24
#define mb_xmit_dpa_word_align    25

#define mb_trig_run                1
#define mb_trig_frame_size         2
#define mb_trig_deadtime_size      3
#define mb_trig_active_size        4
#define mb_trig_delay1_size        5
#define mb_trig_delay2_size        6
#define mb_trig_enable             7
#define mb_trig_calib_delay        8

#define mb_trig_prescale0         10
#define mb_trig_prescale1         11
#define mb_trig_prescale2         12
#define mb_trig_prescale3         13
#define mb_trig_prescale4         14
#define mb_trig_prescale5         15
#define mb_trig_prescale6         16
#define mb_trig_prescale7         17
#define mb_trig_prescale8         18

#define mb_trig_mask0             20
#define mb_trig_mask1             21
#define mb_trig_mask2             22
#define mb_trig_mask3             23
#define mb_trig_mask4             24
#define mb_trig_mask5             25
#define mb_trig_mask6             26
#define mb_trig_mask7             27
#define mb_trig_mask8             28

#define mb_trig_rd_param          30
#define mb_trig_pctrig            31
#define mb_trig_rd_status         32
#define mb_trig_reset             33
#define mb_trig_calib             34
#define mb_trig_rd_gps            35

#define mb_trig_g1_allow_min      36
#define mb_trig_g1_allow_max      37
#define mb_trig_g2_allow_min      38
#define mb_trig_g2_allow_max      39

#define mb_trig_sel1              40
#define mb_trig_sel2              41
#define mb_trig_sel3              42
#define mb_trig_sel4              43

#define mb_trig_g1_width          45
#define mb_trig_g2_width          46

#define mb_trig_p1_delay          50
#define mb_trig_p1_width          51
#define mb_trig_p2_delay          52
#define mb_trig_p2_width          53
#define mb_trig_p3_delay          54
#define mb_trig_p3_width          55
#define mb_trig_pulse_delay       58
#define mb_trig_output_select     59

#define mb_trig_pulse1            60
#define mb_trig_pulse2            61
#define mb_trig_pulse3            62

#define mb_trig_frame_trig        63
#define mb_trig_rd_counter        70

#define mb_gate_fake_sel          80
#define mb_fake_gate_width        47
#define mb_scaler_out_sel_0       81
#define mb_scaler_out_sel_1       82

#define mb_shaper_pulsetime        1
#define mb_shaper_dac              2
#define mb_shaper_pattern          3
#define mb_shaper_write            4
#define mb_shaper_pulse            5
#define mb_shaper_entrig           6

#define mb_feb_pmt_gate_size      47
#define mb_feb_pmt_beam_delay     48
#define mb_feb_pmt_beam_size      49
#define mb_feb_pmt_trig_delay     87

#define mb_feb_pmt_gate1_size     88
#define mb_feb_pmt_beam1_delay    89
#define mb_feb_pmt_beam1_size     90
#define mb_feb_pmt_trig1_delay    91

#define mb_feb_pmt_ch_set         50
#define mb_feb_pmt_delay0         51
#define mb_feb_pmt_delay1         52
#define mb_feb_pmt_precount       53
#define mb_feb_pmt_thresh0        54
#define mb_feb_pmt_thresh1        55
#define mb_feb_pmt_thresh2        56
#define mb_feb_pmt_thresh3        57
#define mb_feb_pmt_width          58
#define mb_feb_pmt_deadtime       59
#define mb_feb_pmt_window         60
#define mb_feb_pmt_words          61
#define mb_feb_pmt_cos_mul        62
#define mb_feb_pmt_cos_thres      63
#define mb_feb_pmt_mich_mul       64
#define mb_feb_pmt_mich_thres     65
#define mb_feb_pmt_beam_mul       66
#define mb_feb_pmt_beam_thres     67
#define mb_feb_pmt_en_top         68
#define mb_feb_pmt_en_upper       69
#define mb_feb_pmt_en_lower       70
#define mb_feb_pmt_blocksize      71

#define mb_feb_pmt_test           80
#define mb_feb_pmt_clear          81
#define mb_feb_pmt_test_data      82
#define mb_feb_pmt_pulse          83

#define mb_feb_pmt_rxreset        84
#define mb_feb_pmt_align_pulse    85
#define mb_feb_pmt_rd_counters    86

#define mb_version               254

#define sp_cntrl_sub               2
#define sp_cntrl_timing            3
#define sp_cntrl_busyrst           4

#define sp_cntrl_init           0x30
#define sp_cntrl_reset          0x28
#define sp_cntrl_l1             0x24
#define sp_cntrl_pulse          0x22

#define sp_cntrl_loopback_on       1
#define sp_cntrl_loopback_off      2
#define sp_cntrl_offline           3
#define sp_cntrl_online            4
#define sp_cntrl_isprst_on         5
#define sp_cntrl_isprst_off        6
#define sp_cntrl_seldisc_off       0
#define sp_cntrl_seldisc_on        7
#define sp_cntrl_seldisc_add      31

#define sp_adc_readback_sub        4
#define sp_adc_readback_transfer   1
#define sp_adc_readback_read       2
#define sp_adc_readback_status     3
#define sp_adc_readback_trig       4

#define sp_adc_trigproc_sub        5

#define sp_adc_input_sub           2
#define sp_adc_slowcntl_sub        1
#define sp_adc_trigproc_sub        5
#define sp_adc_trigopt_sub         7

#define sp_adc_trigopt_fake        1

#define sp_adc_l1_delay            1
#define sp_adc_evt_sample          2

#define sp_adc_rd_link             3
#define sp_adc_rd_cntrl            4

#define sp_adc_sel_l1              5
#define sp_adc_sel_pulse           6
#define sp_adc_sel_test_trig       7

#define sp_adc_sel_link_rxoff      8
#define sp_adc_sel_linux_rxoff     8

#define sp_adc_u_adc_align        10
#define sp_adc_l_adc_align        11
#define sp_adc_pll_reset          12

#define sp_adc_rstblk             13
#define sp_adc_test_pulse         14

#define sp_adc_dpa_reset          15

#define sp_adc_spi_add            20
#define sp_adc_spi_data           30

#define sp_adc_testram_load_ch     4
#define sp_adc_testram_load_data   5
#define sp_adc_testram_trig_delay  7

#define sp_adc_lnk_tx_dreset      20
#define sp_adc_lnk_tx_areset      21
#define sp_adc_trg_tx_dreset      22
#define sp_adc_trg_tx_areset      23
#define sp_adc_lnk_rx_dreset      24
#define sp_adc_lnk_rx_areset      25

#define sp_adc_link_mgmt_reset    26
#define sp_adc_link_conf_w        27
#define sp_adc_link_conf_add      30
#define sp_adc_link_conf_data_l   31
#define sp_adc_link_conf_data_u   32

#define sp_adc_sel_caltrig        33

#define sp_adc_calib_dac         100
#define sp_adc_calib_ch          101
#define sp_adc_calib_write       102
#define sp_adc_calib_send        103
#define sp_adc_calib_gate        104

#define sp_adc_eprom_addr_l       50
#define sp_adc_eprom_addr_h       51
#define sp_adc_eprom_wdata        52
#define sp_adc_eprom_w_pulse      53
#define sp_adc_eprom_read_pulse   54
#define sp_adc_eprom_bulk_erase_p 55
#define sp_adc_eprom_read_status_p      56
#define sp_adc_eprom_read_id_p    57
#define sp_adc_eprom_reset_p      58
#define sp_adc_eprom_sector_protect_p   59
#define sp_adc_eprom_erase_sector 68

#define sp_adc_update_data_in_l   60
#define sp_adc_update_data_in_h   61
#define sp_adc_update_reset_timer 62
#define sp_adc_update_write_param 63
#define sp_adc_update_reconfig    64
#define sp_adc_update_param       65
#define sp_adc_update_reset       66

#define sp_adc_trig_sub_delay      1
#define sp_adc_trig_tbl_chnl       2
#define sp_adc_trig_lkp_addr       3
#define sp_adc_trig_lkp_data       4
#define sp_adc_trig_smpl_phase     5
#define sp_adc_trig_read_delay     6
#define sp_adc_trig_read_size      7
#define sp_adc_trig_lkp_write     10
#define sp_adc_trig_mbd_tbl_add   11
#define sp_adc_trig_mbd_tbl_data  12

#define sp_adc_fake_gtm_init     210
#define sp_adc_fake_gtm_l1       211
#define sp_adc_fake_gtm_reset    212

#define sp_xmit_sub                1

#define sp_xmit_lastmod            1
#define sp_xmit_rxanalogreset      2
#define sp_xmit_rxdigitalreset     3
#define sp_xmit_init               4

#define sp_xmit_rxbytord          15

#define sp_mbd_disc_led           10
#define sp_mbd_disc_charge_dac     4
#define sp_mbd_disc_pulse_even     6
#define sp_mbd_disc_pulse_odd      5
#define sp_mbd_disc_disc_dac       1

#define sp_mbd_clk_pulse           1
#define sp_mbd_clk_delay_off       0
#define sp_mbd_clk_delay_on        2
#define sp_mbd_clk_busy_reset      3
#define sp_mbd_clk_delay_setting   6
#define sp_mbd_clk_add            22

#define sp_L1trig_test_slow        1
#define sp_L1trig_test_tp1_mask    2
#define sp_L1trig_test_tp2_mask    3
#define sp_L1trig_test_status      4

#define sp_l1trig_test_ic2_wr     22
#define sp_l1trig_test_i2c_rd     23

#define sp_L1trig_test_fk_data  0x40

#define sp_L1trig_test_rst         1
#define sp_L1trig_test_reset       2
#define sp_L1trig_test_arst        3
#define sp_L1trig_test_drst        4
#define sp_L1trig_test_clr         5
#define sp_L1trig_test_RESET       6

#define sp_L1trig_test_tp1_byclk   1
#define sp_L1trig_test_tp1_rst     2
#define sp_L1trig_test_tp1_arset   4
#define sp_L1trig_test_tp1_drst    8
#define sp_L1trig_test_tp1_clr    16
#define sp_L1trig_test_tp1_RESET  32

#define sp_L1_s10_slow_chip_id     0

#define sp_L1_s10_slow_thr         6
#define sp_L1_s10_slow_reset       7
#define sp_L1_s10_slow_en0         8
#define sp_L1_s10_slow_en1         9
#define sp_L1_s10_slow_test       12
#define sp_L1_s10_slow_delay      13
#define sp_L1_s10_slow_phasen     14
#define sp_L1_s10_slow_rst_p      15
#define sp_L1_s10_slow_RESET      16
#define sp_L1_s10_slow_monitor_p  20
#define sp_L1_s10_slow_ch_dis1    21
#define sp_L1_s10_slow_ch_dis2    22

#define sp_L1_s10_slow_m_size     23
#define sp_L1_s10_slow_m_delay    24
#define sp_L1_s10_slow_rstblk     25

#define sp_L1_s10_slow_dat2link   26
#define sp_L1_s10_slow_dat2rbdk   27

#define sp_L1_s10_rst_pll          1
#define sp_L1_s10_rst_opt_fem      2
#define sp_L1_s10_rst_opt_st_t     3
#define sp_L1_s10_rst_opt_st_r     5
#define sp_L1_s10_rst_opt_out_t    6

#define sp_L1_s10_slow_mbd_h_read     31
#define sp_L1_s10_slow_mbd_o_read     32
#define sp_L1_s10_slow_mbd_data_read  33
#define sp_L1_s10_slow_mbd_data_sel   29

#define sp_L1_s10_slow_mbd_m_data_transfer  34
#define sp_L1_s10_slow_mbd_m_data_read      35

/* jseb ports */
#define t1_tr_bar 0
#define t2_tr_bar 4
#define cs_bar    2

/* command register location */
#define tx_mode_reg         0x28
#define t1_cs_reg           0x18
#define r1_cs_reg           0x1c
#define t2_cs_reg           0x20
#define r2_cs_reg           0x24

#define tx_md_reg           0x28

#define cs_dma_add_low_reg   0x0
#define cs_dma_add_high_reg  0x4
#define cs_dma_by_cnt        0x8
#define cs_dma_cntrl         0xc
#define cs_dma_msi_abort    0x10

/* define status bits */
#define cs_init         0x20000000
#define cs_mode_p        0x8000000
#define cs_mode_n              0x0
#define cs_start        0x40000000
#define cs_done         0x80000000

#define dma_tr1           0x100000
#define dma_tr2           0x200000
#define dma_tr12          0x300000
#define dma_3dw_trans          0x0
#define dma_4dw_trans          0x0
#define dma_3dw_rec           0x40
#define dma_4dw_rec           0x60
#define dma_in_progress 0x80000000

#define dma_abort 0x2

#endif /* SPHENIX_H */
