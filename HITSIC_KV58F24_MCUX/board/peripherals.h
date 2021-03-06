/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PERIPHERALS_H_
#define _PERIPHERALS_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "fsl_edma.h"
#include "fsl_dmamux.h"
#include "fsl_common.h"
#include "fsl_gpio.h"
#include "fsl_port.h"
#include "fsl_lptmr.h"
#include "fsl_trng.h"
#include "fsl_pit.h"
#include "fsl_hsadc.h"
#include "fsl_uart.h"
#include "fsl_clock.h"
#include "fsl_i2c.h"
#include "fsl_ftm.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/
/* Definitions for RTEPIP_Basic functional group */
/* Used DMA device. */
#define DMA_DMA_BASEADDR DMA0
/* Associated DMAMUX device that is used for muxing of requests. */
#define DMA_DMAMUX_BASEADDR DMAMUX
/* Alias for GPIOA peripheral */
#define GPIOA_GPIO GPIOA
/* Alias for PORTA */
#define GPIOA_PORT PORTA
/* GPIOA interrupt vector ID (number). */
#define GPIOA_IRQN PORTA_IRQn
/* GPIOA interrupt vector priority. */
#define GPIOA_IRQ_PRIORITY 4
/* GPIOA interrupt handler identifier. */
#define GPIOA_IRQHANDLER PORTA_IRQHandler
/* Alias for GPIOB peripheral */
#define GPIOB_GPIO GPIOB
/* Alias for PORTB */
#define GPIOB_PORT PORTB
/* GPIOB interrupt vector ID (number). */
#define GPIOB_IRQN PORTB_IRQn
/* GPIOB interrupt vector priority. */
#define GPIOB_IRQ_PRIORITY 4
/* GPIOB interrupt handler identifier. */
#define GPIOB_IRQHANDLER PORTB_IRQHandler
/* Alias for GPIOC peripheral */
#define GPIOC_GPIO GPIOC
/* Alias for PORTC */
#define GPIOC_PORT PORTC
/* GPIOC interrupt vector ID (number). */
#define GPIOC_IRQN PORTC_IRQn
/* GPIOC interrupt vector priority. */
#define GPIOC_IRQ_PRIORITY 4
/* GPIOC interrupt handler identifier. */
#define GPIOC_IRQHANDLER PORTC_IRQHandler
/* Alias for GPIOD peripheral */
#define GPIOD_GPIO GPIOD
/* Alias for PORTD */
#define GPIOD_PORT PORTD
/* GPIOD interrupt vector ID (number). */
#define GPIOD_IRQN PORTD_IRQn
/* GPIOD interrupt vector priority. */
#define GPIOD_IRQ_PRIORITY 4
/* GPIOD interrupt handler identifier. */
#define GPIOD_IRQHANDLER PORTD_IRQHandler
/* Alias for GPIOE peripheral */
#define GPIOE_GPIO GPIOE
/* Alias for PORTE */
#define GPIOE_PORT PORTE
/* GPIOE interrupt vector ID (number). */
#define GPIOE_IRQN PORTE_IRQn
/* GPIOE interrupt vector priority. */
#define GPIOE_IRQ_PRIORITY 4
/* GPIOE interrupt handler identifier. */
#define GPIOE_IRQHANDLER PORTE_IRQHandler
/* RTEPIP_Basic defines for LPTMR0 */
/* Definition of peripheral ID */
#define PITMGR_LPTMR0_PERIPHERAL LPTMR0
/* Definition of the clock source frequency */
#define PITMGR_LPTMR0_CLK_FREQ 48000000UL
/* Definition of the prescaled clock source frequency */
#define PITMGR_LPTMR0_INPUT_FREQ 48000000UL
/* Definition of the timer period in us */
#define PITMGR_LPTMR0_USEC_COUNT 1000UL
/* Definition of the timer period in number of ticks */
#define PITMGR_LPTMR0_TICKS 48000UL
/* PITMGR_LPTMR0 interrupt vector ID (number). */
#define PITMGR_LPTMR0_IRQN LPTMR0_IRQn
/* PITMGR_LPTMR0 interrupt vector priority. */
#define PITMGR_LPTMR0_IRQ_PRIORITY 6
/* PITMGR_LPTMR0 interrupt handler identifier. */
#define PITMGR_LPTMR0_IRQHANDLER LPTMR0_IRQHandler
/* Definition of peripheral ID */
#define TRNG0_PERIPHERAL TRNG0
/* RTEPIP_Basic defines for PIT */
/* Definition of peripheral ID. */
#define PIT_PERIPHERAL PIT
/* Definition of clock source frequency. */
#define PIT_CLK_FREQ 24000000UL

/* Definitions for RTEPIP_Analog functional group */
/* RTEPIP_Analog defines for HSADC0 */
/* Definition of peripheral ID */
#define EMAG_HSADC0_PERIPHERAL HSADC0
/* Definition of the clock source */
#define EMAG_HSADC0_CLOCK_SOURCE HSADC0_CLK_SRC

/* Definitions for RTEPIP_Digital functional group */
/* Definition of peripheral ID */
#define DBG_UART_PERIPHERAL UART0
/* Definition of the clock source frequency */
#define DBG_UART_CLOCK_SOURCE CLOCK_GetFreq(UART0_CLK_SRC)
/* Rx transfer buffer size. */
#define DBG_UART_RX_BUFFER_SIZE 256
/* Tx transfer buffer size. */
#define DBG_UART_TX_BUFFER_SIZE 256
/* Definition of peripheral ID */
#define IMC_UART_PERIPHERAL UART1
/* Definition of the clock source frequency */
#define IMC_UART_CLOCK_SOURCE CLOCK_GetFreq(UART1_CLK_SRC)
/* Rx transfer buffer size. */
#define IMC_UART_RX_BUFFER_SIZE 1024
/* Tx transfer buffer size. */
#define IMC_UART_TX_BUFFER_SIZE 1024
/* RTEPIP_Digital defines for I2C1 */
/* Definition of peripheral ID */
#define TOF_I2C_PERIPHERAL I2C1
/* Definition of the clock source */
#define TOF_I2C_CLOCK_SOURCE I2C1_CLK_SRC
/* Definition of the clock source frequency */
#define TOF_I2C_CLK_FREQ CLOCK_GetFreq(TOF_I2C_CLOCK_SOURCE)
/* RTEPIP_Digital defines for I2C0 */
/* Definition of peripheral ID */
#define IMU_TCS_I2C_PERIPHERAL I2C0
/* Definition of the clock source */
#define IMU_TCS_I2C_CLOCK_SOURCE I2C0_CLK_SRC
/* Definition of the clock source frequency */
#define IMU_TCS_I2C_CLK_FREQ CLOCK_GetFreq(IMU_TCS_I2C_CLOCK_SOURCE)
/* Definition of peripheral ID */
#define CLED_FTM3_PERIPHERAL FTM3
/* Definition of the clock source frequency */
#define CLED_FTM3_CLOCK_SOURCE CLOCK_GetFreq(kCLOCK_McgFixedFreqClk)
/* CLED_FTM3 interrupt vector ID (number). */
#define CLED_FTM3_IRQN FTM3_IRQn
/* CLED_FTM3 interrupt handler identifier. */
#define CLED_FTM3_IRQHANDLER FTM3_IRQHandler

/***********************************************************************************************************************
 * Global variables
 **********************************************************************************************************************/
extern const edma_config_t DMA_config;
extern const lptmr_config_t PITMGR_LPTMR0_config;
extern const trng_config_t TRNG0_config;
extern const pit_config_t PIT_config;
extern const hsadc_config_t EMAG_HSADC0_config;
extern const hsadc_converter_config_t EMAG_HSADC0_converter_config;
extern const hsadc_sample_config_t EMAG_HSADC0_config_Sample_0;
extern const hsadc_sample_config_t EMAG_HSADC0_config_Sample_1;
extern const hsadc_sample_config_t EMAG_HSADC0_config_Sample_2;
extern const hsadc_sample_config_t EMAG_HSADC0_config_Sample_3;
extern const hsadc_sample_config_t EMAG_HSADC0_config_Sample_4;
extern const hsadc_sample_config_t EMAG_HSADC0_config_Sample_5;
extern const hsadc_sample_config_t EMAG_HSADC0_config_Sample_8;
extern const hsadc_sample_config_t EMAG_HSADC0_config_Sample_9;
extern const uart_config_t DBG_UART_config;
extern uart_handle_t DBG_UART_handle;
extern uint8_t DBG_UART_rxBuffer[DBG_UART_RX_BUFFER_SIZE];
extern const uart_transfer_t DBG_UART_rxTransfer;
extern uint8_t DBG_UART_txBuffer[DBG_UART_TX_BUFFER_SIZE];
extern const uart_transfer_t DBG_UART_txTransfer;
extern const uart_config_t IMC_UART_config;
extern uart_handle_t IMC_UART_handle;
extern uint8_t IMC_UART_rxBuffer[IMC_UART_RX_BUFFER_SIZE];
extern const uart_transfer_t IMC_UART_rxTransfer;
extern uint8_t IMC_UART_txBuffer[IMC_UART_TX_BUFFER_SIZE];
extern const uart_transfer_t IMC_UART_txTransfer;
extern const i2c_master_config_t TOF_I2C_config;
extern const i2c_master_config_t IMU_TCS_I2C_config;
extern const ftm_config_t CLED_FTM3_config;

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void RTEPIP_Basic(void);
void RTEPIP_Analog(void);
void RTEPIP_Digital(void);

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void);

#if defined(__cplusplus)
}
#endif

#endif /* _PERIPHERALS_H_ */
