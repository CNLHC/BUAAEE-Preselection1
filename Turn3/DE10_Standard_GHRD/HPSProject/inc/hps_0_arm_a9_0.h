#ifndef _ALTERA_HPS_0_ARM_A9_0_H_
#define _ALTERA_HPS_0_ARM_A9_0_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'soc_system' in
 * file '../soc_system.sopcinfo'.
 */

/*
 * This file contains macros for module 'hps_0_arm_a9_0' and devices
 * connected to the following master:
 *   altera_axi_master
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */

/*
 * Macros for device 'hps_0_axi_sdram', class 'axi_sdram'
 * The macros are prefixed with 'HPS_0_AXI_SDRAM_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_AXI_SDRAM_COMPONENT_TYPE axi_sdram
#define HPS_0_AXI_SDRAM_COMPONENT_NAME hps_0_axi_sdram
#define HPS_0_AXI_SDRAM_BASE 0x0
#define HPS_0_AXI_SDRAM_SPAN 0x80000000
#define HPS_0_AXI_SDRAM_END 0x7fffffff
#define HPS_0_AXI_SDRAM_SIZE_MULTIPLE 1
#define HPS_0_AXI_SDRAM_SIZE_VALUE 1<<31
#define HPS_0_AXI_SDRAM_WRITABLE 1
#define HPS_0_AXI_SDRAM_MEMORY_INFO_GENERATE_DAT_SYM 0
#define HPS_0_AXI_SDRAM_MEMORY_INFO_GENERATE_HEX 0
#define HPS_0_AXI_SDRAM_MEMORY_INFO_MEM_INIT_DATA_WIDTH 31

/*
 * Macros for device 'sysid_qsys', class 'altera_avalon_sysid_qsys'
 * The macros are prefixed with 'SYSID_QSYS_'.
 * The prefix is the slave descriptor.
 */
#define SYSID_QSYS_COMPONENT_TYPE altera_avalon_sysid_qsys
#define SYSID_QSYS_COMPONENT_NAME sysid_qsys
#define SYSID_QSYS_BASE 0xff201000
#define SYSID_QSYS_SPAN 8
#define SYSID_QSYS_END 0xff201007
#define SYSID_QSYS_ID 2899645186
#define SYSID_QSYS_TIMESTAMP 1553312965

/*
 * Macros for device 'led_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'LED_PIO_'.
 * The prefix is the slave descriptor.
 */
#define LED_PIO_COMPONENT_TYPE altera_avalon_pio
#define LED_PIO_COMPONENT_NAME led_pio
#define LED_PIO_BASE 0xff203000
#define LED_PIO_SPAN 16
#define LED_PIO_END 0xff20300f
#define LED_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define LED_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_PIO_CAPTURE 0
#define LED_PIO_DATA_WIDTH 10
#define LED_PIO_DO_TEST_BENCH_WIRING 0
#define LED_PIO_DRIVEN_SIM_VALUE 0
#define LED_PIO_EDGE_TYPE NONE
#define LED_PIO_FREQ 50000000
#define LED_PIO_HAS_IN 0
#define LED_PIO_HAS_OUT 1
#define LED_PIO_HAS_TRI 0
#define LED_PIO_IRQ_TYPE NONE
#define LED_PIO_RESET_VALUE 0

/*
 * Macros for device 'dipsw_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'DIPSW_PIO_'.
 * The prefix is the slave descriptor.
 */
#define DIPSW_PIO_COMPONENT_TYPE altera_avalon_pio
#define DIPSW_PIO_COMPONENT_NAME dipsw_pio
#define DIPSW_PIO_BASE 0xff204000
#define DIPSW_PIO_SPAN 16
#define DIPSW_PIO_END 0xff20400f
#define DIPSW_PIO_BIT_CLEARING_EDGE_REGISTER 1
#define DIPSW_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DIPSW_PIO_CAPTURE 1
#define DIPSW_PIO_DATA_WIDTH 10
#define DIPSW_PIO_DO_TEST_BENCH_WIRING 0
#define DIPSW_PIO_DRIVEN_SIM_VALUE 0
#define DIPSW_PIO_EDGE_TYPE ANY
#define DIPSW_PIO_FREQ 50000000
#define DIPSW_PIO_HAS_IN 1
#define DIPSW_PIO_HAS_OUT 0
#define DIPSW_PIO_HAS_TRI 0
#define DIPSW_PIO_IRQ_TYPE EDGE
#define DIPSW_PIO_RESET_VALUE 0

/*
 * Macros for device 'button_pio', class 'altera_avalon_pio'
 * The macros are prefixed with 'BUTTON_PIO_'.
 * The prefix is the slave descriptor.
 */
#define BUTTON_PIO_COMPONENT_TYPE altera_avalon_pio
#define BUTTON_PIO_COMPONENT_NAME button_pio
#define BUTTON_PIO_BASE 0xff205000
#define BUTTON_PIO_SPAN 16
#define BUTTON_PIO_END 0xff20500f
#define BUTTON_PIO_BIT_CLEARING_EDGE_REGISTER 1
#define BUTTON_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_PIO_CAPTURE 1
#define BUTTON_PIO_DATA_WIDTH 4
#define BUTTON_PIO_DO_TEST_BENCH_WIRING 0
#define BUTTON_PIO_DRIVEN_SIM_VALUE 0
#define BUTTON_PIO_EDGE_TYPE FALLING
#define BUTTON_PIO_FREQ 50000000
#define BUTTON_PIO_HAS_IN 1
#define BUTTON_PIO_HAS_OUT 0
#define BUTTON_PIO_HAS_TRI 0
#define BUTTON_PIO_IRQ_TYPE EDGE
#define BUTTON_PIO_RESET_VALUE 0

/*
 * Macros for device 'FrequencyMeter_0_pioPhaCountLSB', class 'altera_avalon_pio'
 * The macros are prefixed with 'FREQUENCYMETER_0_PIOPHACOUNTLSB_'.
 * The prefix is the slave descriptor.
 */
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_COMPONENT_TYPE altera_avalon_pio
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_COMPONENT_NAME FrequencyMeter_0_pioPhaCountLSB
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_BASE 0xff206000
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_SPAN 16
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_END 0xff20600f
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_BIT_CLEARING_EDGE_REGISTER 0
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_CAPTURE 0
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_DATA_WIDTH 32
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_DO_TEST_BENCH_WIRING 0
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_DRIVEN_SIM_VALUE 0
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_EDGE_TYPE NONE
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_FREQ 50000000
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_HAS_IN 1
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_HAS_OUT 0
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_HAS_TRI 0
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_IRQ_TYPE NONE
#define FREQUENCYMETER_0_PIOPHACOUNTLSB_RESET_VALUE 0

/*
 * Macros for device 'FrequencyMeter_0_pioPhaCountMSB', class 'altera_avalon_pio'
 * The macros are prefixed with 'FREQUENCYMETER_0_PIOPHACOUNTMSB_'.
 * The prefix is the slave descriptor.
 */
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_COMPONENT_TYPE altera_avalon_pio
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_COMPONENT_NAME FrequencyMeter_0_pioPhaCountMSB
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_BASE 0xff207000
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_SPAN 16
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_END 0xff20700f
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_BIT_CLEARING_EDGE_REGISTER 0
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_CAPTURE 0
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_DATA_WIDTH 32
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_DO_TEST_BENCH_WIRING 0
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_DRIVEN_SIM_VALUE 0
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_EDGE_TYPE NONE
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_FREQ 50000000
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_HAS_IN 1
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_HAS_OUT 0
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_HAS_TRI 0
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_IRQ_TYPE NONE
#define FREQUENCYMETER_0_PIOPHACOUNTMSB_RESET_VALUE 0

/*
 * Macros for device 'FrequencyMeter_0_pioRefCountLSB', class 'altera_avalon_pio'
 * The macros are prefixed with 'FREQUENCYMETER_0_PIOREFCOUNTLSB_'.
 * The prefix is the slave descriptor.
 */
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_COMPONENT_TYPE altera_avalon_pio
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_COMPONENT_NAME FrequencyMeter_0_pioRefCountLSB
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_BASE 0xff208000
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_SPAN 16
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_END 0xff20800f
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_BIT_CLEARING_EDGE_REGISTER 0
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_CAPTURE 0
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_DATA_WIDTH 32
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_DO_TEST_BENCH_WIRING 0
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_DRIVEN_SIM_VALUE 0
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_EDGE_TYPE NONE
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_FREQ 50000000
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_HAS_IN 1
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_HAS_OUT 0
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_HAS_TRI 0
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_IRQ_TYPE NONE
#define FREQUENCYMETER_0_PIOREFCOUNTLSB_RESET_VALUE 0

/*
 * Macros for device 'FrequencyMeter_0_pioRefCountMSB', class 'altera_avalon_pio'
 * The macros are prefixed with 'FREQUENCYMETER_0_PIOREFCOUNTMSB_'.
 * The prefix is the slave descriptor.
 */
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_COMPONENT_TYPE altera_avalon_pio
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_COMPONENT_NAME FrequencyMeter_0_pioRefCountMSB
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_BASE 0xff209000
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_SPAN 16
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_END 0xff20900f
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_BIT_CLEARING_EDGE_REGISTER 0
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_CAPTURE 0
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_DATA_WIDTH 32
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_DO_TEST_BENCH_WIRING 0
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_DRIVEN_SIM_VALUE 0
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_EDGE_TYPE NONE
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_FREQ 50000000
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_HAS_IN 1
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_HAS_OUT 0
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_HAS_TRI 0
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_IRQ_TYPE NONE
#define FREQUENCYMETER_0_PIOREFCOUNTMSB_RESET_VALUE 0

/*
 * Macros for device 'FrequencyMeter_0_pioSigCountLSB', class 'altera_avalon_pio'
 * The macros are prefixed with 'FREQUENCYMETER_0_PIOSIGCOUNTLSB_'.
 * The prefix is the slave descriptor.
 */
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_COMPONENT_TYPE altera_avalon_pio
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_COMPONENT_NAME FrequencyMeter_0_pioSigCountLSB
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_BASE 0xff20a000
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_SPAN 16
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_END 0xff20a00f
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_BIT_CLEARING_EDGE_REGISTER 0
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_CAPTURE 0
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_DATA_WIDTH 32
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_DO_TEST_BENCH_WIRING 0
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_DRIVEN_SIM_VALUE 0
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_EDGE_TYPE NONE
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_FREQ 50000000
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_HAS_IN 1
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_HAS_OUT 0
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_HAS_TRI 0
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_IRQ_TYPE NONE
#define FREQUENCYMETER_0_PIOSIGCOUNTLSB_RESET_VALUE 0

/*
 * Macros for device 'FrequencyMeter_0_pioSigCountMSB', class 'altera_avalon_pio'
 * The macros are prefixed with 'FREQUENCYMETER_0_PIOSIGCOUNTMSB_'.
 * The prefix is the slave descriptor.
 */
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_COMPONENT_TYPE altera_avalon_pio
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_COMPONENT_NAME FrequencyMeter_0_pioSigCountMSB
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_BASE 0xff20b000
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_SPAN 16
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_END 0xff20b00f
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_BIT_CLEARING_EDGE_REGISTER 0
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_BIT_MODIFYING_OUTPUT_REGISTER 0
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_CAPTURE 0
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_DATA_WIDTH 32
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_DO_TEST_BENCH_WIRING 0
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_DRIVEN_SIM_VALUE 0
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_EDGE_TYPE NONE
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_FREQ 50000000
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_HAS_IN 1
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_HAS_OUT 0
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_HAS_TRI 0
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_IRQ_TYPE NONE
#define FREQUENCYMETER_0_PIOSIGCOUNTMSB_RESET_VALUE 0

/*
 * Macros for device 'FrequencyMeter_0_sysid_qsys_0', class 'altera_avalon_sysid_qsys'
 * The macros are prefixed with 'FREQUENCYMETER_0_SYSID_QSYS_0_'.
 * The prefix is the slave descriptor.
 */
#define FREQUENCYMETER_0_SYSID_QSYS_0_COMPONENT_TYPE altera_avalon_sysid_qsys
#define FREQUENCYMETER_0_SYSID_QSYS_0_COMPONENT_NAME FrequencyMeter_0_sysid_qsys_0
#define FREQUENCYMETER_0_SYSID_QSYS_0_BASE 0xff20c000
#define FREQUENCYMETER_0_SYSID_QSYS_0_SPAN 8
#define FREQUENCYMETER_0_SYSID_QSYS_0_END 0xff20c007
#define FREQUENCYMETER_0_SYSID_QSYS_0_ID 371397237
#define FREQUENCYMETER_0_SYSID_QSYS_0_TIMESTAMP 1553312965

/*
 * Macros for device 'jtag_uart', class 'altera_avalon_jtag_uart'
 * The macros are prefixed with 'JTAG_UART_'.
 * The prefix is the slave descriptor.
 */
#define JTAG_UART_COMPONENT_TYPE altera_avalon_jtag_uart
#define JTAG_UART_COMPONENT_NAME jtag_uart
#define JTAG_UART_BASE 0xff220000
#define JTAG_UART_SPAN 8
#define JTAG_UART_END 0xff220007
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8

/*
 * Macros for device 'ILC', class 'interrupt_latency_counter'
 * The macros are prefixed with 'ILC_'.
 * The prefix is the slave descriptor.
 */
#define ILC_COMPONENT_TYPE interrupt_latency_counter
#define ILC_COMPONENT_NAME ILC
#define ILC_BASE 0xff230000
#define ILC_SPAN 256
#define ILC_END 0xff2300ff

/*
 * Macros for device 'hps_0_gmac0', class 'stmmac'
 * The macros are prefixed with 'HPS_0_GMAC0_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_GMAC0_COMPONENT_TYPE stmmac
#define HPS_0_GMAC0_COMPONENT_NAME hps_0_gmac0
#define HPS_0_GMAC0_BASE 0xff700000
#define HPS_0_GMAC0_SPAN 8192
#define HPS_0_GMAC0_END 0xff701fff

/*
 * Macros for device 'hps_0_gmac1', class 'stmmac'
 * The macros are prefixed with 'HPS_0_GMAC1_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_GMAC1_COMPONENT_TYPE stmmac
#define HPS_0_GMAC1_COMPONENT_NAME hps_0_gmac1
#define HPS_0_GMAC1_BASE 0xff702000
#define HPS_0_GMAC1_SPAN 8192
#define HPS_0_GMAC1_END 0xff703fff

/*
 * Macros for device 'hps_0_sdmmc', class 'sdmmc'
 * The macros are prefixed with 'HPS_0_SDMMC_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_SDMMC_COMPONENT_TYPE sdmmc
#define HPS_0_SDMMC_COMPONENT_NAME hps_0_sdmmc
#define HPS_0_SDMMC_BASE 0xff704000
#define HPS_0_SDMMC_SPAN 4096
#define HPS_0_SDMMC_END 0xff704fff

/*
 * Macros for device 'hps_0_qspi', class 'cadence_qspi'
 * The macros are prefixed with 'HPS_0_QSPI_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_QSPI_COMPONENT_TYPE cadence_qspi
#define HPS_0_QSPI_COMPONENT_NAME hps_0_qspi
#define HPS_0_QSPI_BASE 0xff705000
#define HPS_0_QSPI_SPAN 256
#define HPS_0_QSPI_END 0xff7050ff

/*
 * Macros for device 'hps_0_fpgamgr', class 'altera_fpgamgr'
 * The macros are prefixed with 'HPS_0_FPGAMGR_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_FPGAMGR_COMPONENT_TYPE altera_fpgamgr
#define HPS_0_FPGAMGR_COMPONENT_NAME hps_0_fpgamgr
#define HPS_0_FPGAMGR_BASE 0xff706000
#define HPS_0_FPGAMGR_SPAN 4096
#define HPS_0_FPGAMGR_END 0xff706fff

/*
 * Macros for device 'hps_0_gpio0', class 'dw_gpio'
 * The macros are prefixed with 'HPS_0_GPIO0_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_GPIO0_COMPONENT_TYPE dw_gpio
#define HPS_0_GPIO0_COMPONENT_NAME hps_0_gpio0
#define HPS_0_GPIO0_BASE 0xff708000
#define HPS_0_GPIO0_SPAN 256
#define HPS_0_GPIO0_END 0xff7080ff

/*
 * Macros for device 'hps_0_gpio1', class 'dw_gpio'
 * The macros are prefixed with 'HPS_0_GPIO1_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_GPIO1_COMPONENT_TYPE dw_gpio
#define HPS_0_GPIO1_COMPONENT_NAME hps_0_gpio1
#define HPS_0_GPIO1_BASE 0xff709000
#define HPS_0_GPIO1_SPAN 256
#define HPS_0_GPIO1_END 0xff7090ff

/*
 * Macros for device 'hps_0_gpio2', class 'dw_gpio'
 * The macros are prefixed with 'HPS_0_GPIO2_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_GPIO2_COMPONENT_TYPE dw_gpio
#define HPS_0_GPIO2_COMPONENT_NAME hps_0_gpio2
#define HPS_0_GPIO2_BASE 0xff70a000
#define HPS_0_GPIO2_SPAN 256
#define HPS_0_GPIO2_END 0xff70a0ff

/*
 * Macros for device 'hps_0_l3regs', class 'altera_l3regs'
 * The macros are prefixed with 'HPS_0_L3REGS_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_L3REGS_COMPONENT_TYPE altera_l3regs
#define HPS_0_L3REGS_COMPONENT_NAME hps_0_l3regs
#define HPS_0_L3REGS_BASE 0xff800000
#define HPS_0_L3REGS_SPAN 4096
#define HPS_0_L3REGS_END 0xff800fff

/*
 * Macros for device 'hps_0_nand0', class 'denali_nand'
 * The macros are prefixed with 'HPS_0_NAND0_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_NAND0_COMPONENT_TYPE denali_nand
#define HPS_0_NAND0_COMPONENT_NAME hps_0_nand0
#define HPS_0_NAND0_BASE 0xff900000
#define HPS_0_NAND0_SPAN 65536
#define HPS_0_NAND0_END 0xff90ffff

/*
 * Macros for device 'hps_0_usb0', class 'usb'
 * The macros are prefixed with 'HPS_0_USB0_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_USB0_COMPONENT_TYPE usb
#define HPS_0_USB0_COMPONENT_NAME hps_0_usb0
#define HPS_0_USB0_BASE 0xffb00000
#define HPS_0_USB0_SPAN 262144
#define HPS_0_USB0_END 0xffb3ffff

/*
 * Macros for device 'hps_0_usb1', class 'usb'
 * The macros are prefixed with 'HPS_0_USB1_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_USB1_COMPONENT_TYPE usb
#define HPS_0_USB1_COMPONENT_NAME hps_0_usb1
#define HPS_0_USB1_BASE 0xffb40000
#define HPS_0_USB1_SPAN 262144
#define HPS_0_USB1_END 0xffb7ffff

/*
 * Macros for device 'hps_0_dcan0', class 'bosch_dcan'
 * The macros are prefixed with 'HPS_0_DCAN0_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_DCAN0_COMPONENT_TYPE bosch_dcan
#define HPS_0_DCAN0_COMPONENT_NAME hps_0_dcan0
#define HPS_0_DCAN0_BASE 0xffc00000
#define HPS_0_DCAN0_SPAN 4096
#define HPS_0_DCAN0_END 0xffc00fff

/*
 * Macros for device 'hps_0_dcan1', class 'bosch_dcan'
 * The macros are prefixed with 'HPS_0_DCAN1_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_DCAN1_COMPONENT_TYPE bosch_dcan
#define HPS_0_DCAN1_COMPONENT_NAME hps_0_dcan1
#define HPS_0_DCAN1_BASE 0xffc01000
#define HPS_0_DCAN1_SPAN 4096
#define HPS_0_DCAN1_END 0xffc01fff

/*
 * Macros for device 'hps_0_uart0', class 'snps_uart'
 * The macros are prefixed with 'HPS_0_UART0_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_UART0_COMPONENT_TYPE snps_uart
#define HPS_0_UART0_COMPONENT_NAME hps_0_uart0
#define HPS_0_UART0_BASE 0xffc02000
#define HPS_0_UART0_SPAN 256
#define HPS_0_UART0_END 0xffc020ff
#define HPS_0_UART0_FIFO_DEPTH 128
#define HPS_0_UART0_FIFO_HWFC 0
#define HPS_0_UART0_FIFO_MODE 1
#define HPS_0_UART0_FIFO_SWFC 0
#define HPS_0_UART0_FREQ 100000000

/*
 * Macros for device 'hps_0_uart1', class 'snps_uart'
 * The macros are prefixed with 'HPS_0_UART1_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_UART1_COMPONENT_TYPE snps_uart
#define HPS_0_UART1_COMPONENT_NAME hps_0_uart1
#define HPS_0_UART1_BASE 0xffc03000
#define HPS_0_UART1_SPAN 256
#define HPS_0_UART1_END 0xffc030ff
#define HPS_0_UART1_FIFO_DEPTH 128
#define HPS_0_UART1_FIFO_HWFC 0
#define HPS_0_UART1_FIFO_MODE 1
#define HPS_0_UART1_FIFO_SWFC 0
#define HPS_0_UART1_FREQ 100000000

/*
 * Macros for device 'hps_0_i2c0', class 'designware_i2c'
 * The macros are prefixed with 'HPS_0_I2C0_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_I2C0_COMPONENT_TYPE designware_i2c
#define HPS_0_I2C0_COMPONENT_NAME hps_0_i2c0
#define HPS_0_I2C0_BASE 0xffc04000
#define HPS_0_I2C0_SPAN 256
#define HPS_0_I2C0_END 0xffc040ff

/*
 * Macros for device 'hps_0_i2c1', class 'designware_i2c'
 * The macros are prefixed with 'HPS_0_I2C1_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_I2C1_COMPONENT_TYPE designware_i2c
#define HPS_0_I2C1_COMPONENT_NAME hps_0_i2c1
#define HPS_0_I2C1_BASE 0xffc05000
#define HPS_0_I2C1_SPAN 256
#define HPS_0_I2C1_END 0xffc050ff

/*
 * Macros for device 'hps_0_i2c2', class 'designware_i2c'
 * The macros are prefixed with 'HPS_0_I2C2_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_I2C2_COMPONENT_TYPE designware_i2c
#define HPS_0_I2C2_COMPONENT_NAME hps_0_i2c2
#define HPS_0_I2C2_BASE 0xffc06000
#define HPS_0_I2C2_SPAN 256
#define HPS_0_I2C2_END 0xffc060ff

/*
 * Macros for device 'hps_0_i2c3', class 'designware_i2c'
 * The macros are prefixed with 'HPS_0_I2C3_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_I2C3_COMPONENT_TYPE designware_i2c
#define HPS_0_I2C3_COMPONENT_NAME hps_0_i2c3
#define HPS_0_I2C3_BASE 0xffc07000
#define HPS_0_I2C3_SPAN 256
#define HPS_0_I2C3_END 0xffc070ff

/*
 * Macros for device 'hps_0_timer0', class 'dw_apb_timer_sp'
 * The macros are prefixed with 'HPS_0_TIMER0_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_TIMER0_COMPONENT_TYPE dw_apb_timer_sp
#define HPS_0_TIMER0_COMPONENT_NAME hps_0_timer0
#define HPS_0_TIMER0_BASE 0xffc08000
#define HPS_0_TIMER0_SPAN 256
#define HPS_0_TIMER0_END 0xffc080ff

/*
 * Macros for device 'hps_0_timer1', class 'dw_apb_timer_sp'
 * The macros are prefixed with 'HPS_0_TIMER1_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_TIMER1_COMPONENT_TYPE dw_apb_timer_sp
#define HPS_0_TIMER1_COMPONENT_NAME hps_0_timer1
#define HPS_0_TIMER1_BASE 0xffc09000
#define HPS_0_TIMER1_SPAN 256
#define HPS_0_TIMER1_END 0xffc090ff

/*
 * Macros for device 'hps_0_sdrctl', class 'altera_sdrctl'
 * The macros are prefixed with 'HPS_0_SDRCTL_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_SDRCTL_COMPONENT_TYPE altera_sdrctl
#define HPS_0_SDRCTL_COMPONENT_NAME hps_0_sdrctl
#define HPS_0_SDRCTL_BASE 0xffc25000
#define HPS_0_SDRCTL_SPAN 4096
#define HPS_0_SDRCTL_END 0xffc25fff

/*
 * Macros for device 'hps_0_timer2', class 'dw_apb_timer_osc'
 * The macros are prefixed with 'HPS_0_TIMER2_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_TIMER2_COMPONENT_TYPE dw_apb_timer_osc
#define HPS_0_TIMER2_COMPONENT_NAME hps_0_timer2
#define HPS_0_TIMER2_BASE 0xffd00000
#define HPS_0_TIMER2_SPAN 256
#define HPS_0_TIMER2_END 0xffd000ff

/*
 * Macros for device 'hps_0_timer3', class 'dw_apb_timer_osc'
 * The macros are prefixed with 'HPS_0_TIMER3_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_TIMER3_COMPONENT_TYPE dw_apb_timer_osc
#define HPS_0_TIMER3_COMPONENT_NAME hps_0_timer3
#define HPS_0_TIMER3_BASE 0xffd01000
#define HPS_0_TIMER3_SPAN 256
#define HPS_0_TIMER3_END 0xffd010ff

/*
 * Macros for device 'hps_0_wd_timer0', class 'dw_wd_timer'
 * The macros are prefixed with 'HPS_0_WD_TIMER0_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_WD_TIMER0_COMPONENT_TYPE dw_wd_timer
#define HPS_0_WD_TIMER0_COMPONENT_NAME hps_0_wd_timer0
#define HPS_0_WD_TIMER0_BASE 0xffd02000
#define HPS_0_WD_TIMER0_SPAN 256
#define HPS_0_WD_TIMER0_END 0xffd020ff

/*
 * Macros for device 'hps_0_wd_timer1', class 'dw_wd_timer'
 * The macros are prefixed with 'HPS_0_WD_TIMER1_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_WD_TIMER1_COMPONENT_TYPE dw_wd_timer
#define HPS_0_WD_TIMER1_COMPONENT_NAME hps_0_wd_timer1
#define HPS_0_WD_TIMER1_BASE 0xffd03000
#define HPS_0_WD_TIMER1_SPAN 256
#define HPS_0_WD_TIMER1_END 0xffd030ff

/*
 * Macros for device 'hps_0_clkmgr', class 'asimov_clkmgr'
 * The macros are prefixed with 'HPS_0_CLKMGR_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_CLKMGR_COMPONENT_TYPE asimov_clkmgr
#define HPS_0_CLKMGR_COMPONENT_NAME hps_0_clkmgr
#define HPS_0_CLKMGR_BASE 0xffd04000
#define HPS_0_CLKMGR_SPAN 4096
#define HPS_0_CLKMGR_END 0xffd04fff

/*
 * Macros for device 'hps_0_rstmgr', class 'altera_rstmgr'
 * The macros are prefixed with 'HPS_0_RSTMGR_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_RSTMGR_COMPONENT_TYPE altera_rstmgr
#define HPS_0_RSTMGR_COMPONENT_NAME hps_0_rstmgr
#define HPS_0_RSTMGR_BASE 0xffd05000
#define HPS_0_RSTMGR_SPAN 256
#define HPS_0_RSTMGR_END 0xffd050ff

/*
 * Macros for device 'hps_0_sysmgr', class 'altera_sysmgr'
 * The macros are prefixed with 'HPS_0_SYSMGR_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_SYSMGR_COMPONENT_TYPE altera_sysmgr
#define HPS_0_SYSMGR_COMPONENT_NAME hps_0_sysmgr
#define HPS_0_SYSMGR_BASE 0xffd08000
#define HPS_0_SYSMGR_SPAN 1024
#define HPS_0_SYSMGR_END 0xffd083ff

/*
 * Macros for device 'hps_0_dma', class 'arm_pl330_dma'
 * The macros are prefixed with 'HPS_0_DMA_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_DMA_COMPONENT_TYPE arm_pl330_dma
#define HPS_0_DMA_COMPONENT_NAME hps_0_dma
#define HPS_0_DMA_BASE 0xffe01000
#define HPS_0_DMA_SPAN 4096
#define HPS_0_DMA_END 0xffe01fff

/*
 * Macros for device 'hps_0_spim0', class 'spi'
 * The macros are prefixed with 'HPS_0_SPIM0_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_SPIM0_COMPONENT_TYPE spi
#define HPS_0_SPIM0_COMPONENT_NAME hps_0_spim0
#define HPS_0_SPIM0_BASE 0xfff00000
#define HPS_0_SPIM0_SPAN 256
#define HPS_0_SPIM0_END 0xfff000ff

/*
 * Macros for device 'hps_0_spim1', class 'spi'
 * The macros are prefixed with 'HPS_0_SPIM1_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_SPIM1_COMPONENT_TYPE spi
#define HPS_0_SPIM1_COMPONENT_NAME hps_0_spim1
#define HPS_0_SPIM1_BASE 0xfff01000
#define HPS_0_SPIM1_SPAN 256
#define HPS_0_SPIM1_END 0xfff010ff

/*
 * Macros for device 'hps_0_scu', class 'scu'
 * The macros are prefixed with 'HPS_0_SCU_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_SCU_COMPONENT_TYPE scu
#define HPS_0_SCU_COMPONENT_NAME hps_0_scu
#define HPS_0_SCU_BASE 0xfffec000
#define HPS_0_SCU_SPAN 256
#define HPS_0_SCU_END 0xfffec0ff

/*
 * Macros for device 'hps_0_timer', class 'arm_internal_timer'
 * The macros are prefixed with 'HPS_0_TIMER_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_TIMER_COMPONENT_TYPE arm_internal_timer
#define HPS_0_TIMER_COMPONENT_NAME hps_0_timer
#define HPS_0_TIMER_BASE 0xfffec600
#define HPS_0_TIMER_SPAN 256
#define HPS_0_TIMER_END 0xfffec6ff

/*
 * Macros for device 'hps_0_arm_gic_0', class 'arm_gic'
 * The macros are prefixed with 'HPS_0_ARM_GIC_0_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_ARM_GIC_0_COMPONENT_TYPE arm_gic
#define HPS_0_ARM_GIC_0_COMPONENT_NAME hps_0_arm_gic_0
#define HPS_0_ARM_GIC_0_BASE 0xfffed000
#define HPS_0_ARM_GIC_0_SPAN 4096
#define HPS_0_ARM_GIC_0_END 0xfffedfff

/*
 * Macros for device 'hps_0_L2', class 'arm_pl310_L2'
 * The macros are prefixed with 'HPS_0_L2_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_L2_COMPONENT_TYPE arm_pl310_L2
#define HPS_0_L2_COMPONENT_NAME hps_0_L2
#define HPS_0_L2_BASE 0xfffef000
#define HPS_0_L2_SPAN 4096
#define HPS_0_L2_END 0xfffeffff

/*
 * Macros for device 'hps_0_axi_ocram', class 'axi_ocram'
 * The macros are prefixed with 'HPS_0_AXI_OCRAM_'.
 * The prefix is the slave descriptor.
 */
#define HPS_0_AXI_OCRAM_COMPONENT_TYPE axi_ocram
#define HPS_0_AXI_OCRAM_COMPONENT_NAME hps_0_axi_ocram
#define HPS_0_AXI_OCRAM_BASE 0xffff0000
#define HPS_0_AXI_OCRAM_SPAN 65536
#define HPS_0_AXI_OCRAM_END 0xffffffff
#define HPS_0_AXI_OCRAM_SIZE_MULTIPLE 1
#define HPS_0_AXI_OCRAM_SIZE_VALUE 1<<16
#define HPS_0_AXI_OCRAM_WRITABLE 1
#define HPS_0_AXI_OCRAM_MEMORY_INFO_GENERATE_DAT_SYM 0
#define HPS_0_AXI_OCRAM_MEMORY_INFO_GENERATE_HEX 0
#define HPS_0_AXI_OCRAM_MEMORY_INFO_MEM_INIT_DATA_WIDTH 16


#endif /* _ALTERA_HPS_0_ARM_A9_0_H_ */
