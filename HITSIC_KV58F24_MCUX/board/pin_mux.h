/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void RTEPIN_Basic(void);

#define SOPT5_UART1RXSRC_UART_RX 0x00u /*!<@brief UART 1 receive data source select: UART1_RX pin */
#define SOPT5_UART1TXSRC_UART_TX 0x00u /*!<@brief UART 1 transmit data source select: UART1_TX pin */

/*! @name PORTE0 (number 1), IMC_UART_TX
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_INTERMCUCOMM_IMC_UART_TX_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_INTERMCUCOMM_IMC_UART_TX_PIN 0U                   /*!<@brief PORT pin number */
#define RTEPIN_INTERMCUCOMM_IMC_UART_TX_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                                 /* @} */

/*! @name PORTE1 (number 2), IMC_UART_RX
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_INTERMCUCOMM_IMC_UART_RX_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_INTERMCUCOMM_IMC_UART_RX_PIN 1U                   /*!<@brief PORT pin number */
#define RTEPIN_INTERMCUCOMM_IMC_UART_RX_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                                 /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void RTEPIN_InterMcuComm(void);

/*!
 * @brief FTM3 channel 0 output source: FTM3_CH0 pin is output of FTM3 channel 0 output */
#define SOPT8_FTM3OCH0SRC_FTM 0x00u
/*!
 * @brief FTM3 channel 1 output source: FTM3_CH1 pin is output of FTM3 channel 1 output */
#define SOPT8_FTM3OCH1SRC_FTM 0x00u
/*!
 * @brief FTM3 channel 2 output source: FTM3_CH2 pin is output of FTM3 channel 2 output */
#define SOPT8_FTM3OCH2SRC_FTM 0x00u
/*!
 * @brief FTM3 channel 3 output source: FTM3_CH3 pin is output of FTM3 channel 3 output */
#define SOPT8_FTM3OCH3SRC_FTM 0x00u
/*!
 * @brief FTM3 channel 4 output source: FTM3_CH4 pin is output of FTM3 channel 4 output */
#define SOPT8_FTM3OCH4SRC_FTM 0x00u
/*!
 * @brief FTM3 channel 5 output source: FTM3_CH5 pin is output of FTM3 channel 5 output */
#define SOPT8_FTM3OCH5SRC_FTM 0x00u

/*! @name PORTE5 (number 8), CLED_LR
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_CLED_CLED_LR_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_CLED_CLED_LR_PIN 5U                   /*!<@brief PORT pin number */
#define RTEPIN_CLED_CLED_LR_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PORTE6 (number 9), CLED_LG
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_CLED_CLED_LG_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_CLED_CLED_LG_PIN 6U                   /*!<@brief PORT pin number */
#define RTEPIN_CLED_CLED_LG_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PORTE7 (number 10), CLED_LB
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_CLED_CLED_LB_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_CLED_CLED_LB_PIN 7U                   /*!<@brief PORT pin number */
#define RTEPIN_CLED_CLED_LB_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PORTE8 (number 11), CLED_RR
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_CLED_CLED_RR_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_CLED_CLED_RR_PIN 8U                   /*!<@brief PORT pin number */
#define RTEPIN_CLED_CLED_RR_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PORTE9 (number 12), CLED_RG
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_CLED_CLED_RG_PORT PORTE               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_CLED_CLED_RG_PIN 9U                   /*!<@brief PORT pin number */
#define RTEPIN_CLED_CLED_RG_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PORTE10 (number 13), CLED_RB
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_CLED_CLED_RB_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_CLED_CLED_RB_PIN 10U                   /*!<@brief PORT pin number */
#define RTEPIN_CLED_CLED_RB_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void RTEPIN_CLED(void);

/*! @name PORTE16 (number 18), EMAG_EWL
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_EMAG_EMAG_EWL_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_EMAG_EMAG_EWL_PIN 16U                   /*!<@brief PORT pin number */
#define RTEPIN_EMAG_EMAG_EWL_PIN_MASK (1U << 16U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PORTE17 (number 19), EMAG_EXL
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_EMAG_EMAG_EXL_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_EMAG_EMAG_EXL_PIN 17U                   /*!<@brief PORT pin number */
#define RTEPIN_EMAG_EMAG_EXL_PIN_MASK (1U << 17U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PORTE18 (number 20), EMAG_EWR
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_EMAG_EMAG_EWR_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_EMAG_EMAG_EWR_PIN 18U                   /*!<@brief PORT pin number */
#define RTEPIN_EMAG_EMAG_EWR_PIN_MASK (1U << 18U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PORTE19 (number 21), EMAG_EXR
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_EMAG_EMAG_EXR_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_EMAG_EMAG_EXR_PIN 19U                   /*!<@brief PORT pin number */
#define RTEPIN_EMAG_EMAG_EXR_PIN_MASK (1U << 19U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name HSADC1A_CH2 (number 27), EMAG_EYLF
  @{ */
/* @} */

/*! @name HSADC1A_CH3 (number 28), EMAG_EZLF
  @{ */
/* @} */

/*! @name HSADC1B_CH2 (number 29), EMAG_EYRF
  @{ */
/* @} */

/*! @name HSADC1B_CH3 (number 30), EMAG_EZRF
  @{ */
/* @} */

/*! @name HSADC0A_CH6 (number 23), EMAG_EYL
  @{ */
/* @} */

/*! @name HSADC0A_CH7 (number 24), EMAG_EZL
  @{ */
/* @} */

/*! @name PORTE20 (number 25), EMAG_EYR
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_EMAG_EMAG_EYR_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_EMAG_EMAG_EYR_PIN 20U                   /*!<@brief PORT pin number */
#define RTEPIN_EMAG_EMAG_EYR_PIN_MASK (1U << 20U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PORTE21 (number 26), EMAG_EZR
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_EMAG_EMAG_EZR_PORT PORTE                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_EMAG_EMAG_EZR_PIN 21U                   /*!<@brief PORT pin number */
#define RTEPIN_EMAG_EMAG_EZR_PIN_MASK (1U << 21U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void RTEPIN_EMAG(void);

#define SOPT5_UART0RXSRC_UART_RX 0x00u /*!<@brief UART 0 receive data source select: UART0_RX pin */
#define SOPT5_UART0TXSRC_UART_TX 0x00u /*!<@brief UART 0 transmit data source select: UART0_TX pin */

/*! @name PORTA1 (number 51), DBG_UART_RX
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_DEBUG_DBG_UART_RX_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_DEBUG_DBG_UART_RX_PIN 1U                   /*!<@brief PORT pin number */
#define RTEPIN_DEBUG_DBG_UART_RX_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PORTA2 (number 52), DBG_UART_TX
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_DEBUG_DBG_UART_TX_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_DEBUG_DBG_UART_TX_PIN 2U                   /*!<@brief PORT pin number */
#define RTEPIN_DEBUG_DBG_UART_TX_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PORTA0 (number 50), DBG_TCK
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_DEBUG_DBG_TCK_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_DEBUG_DBG_TCK_PIN 0U                   /*!<@brief PORT pin number */
#define RTEPIN_DEBUG_DBG_TCK_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*! @name PORTA3 (number 53), DBT_TMS
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_DEBUG_DBT_TMS_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_DEBUG_DBT_TMS_PIN 3U                   /*!<@brief PORT pin number */
#define RTEPIN_DEBUG_DBT_TMS_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void RTEPIN_Debug(void);

/*! @name PORTA7 (number 59), TOF0_XHT
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_TOFSENSOR_TOF0_XHT_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOF0_XHT_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_TOFSENSOR_TOF0_XHT_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOF0_XHT_PIN 7U                   /*!<@brief PORT pin number */
#define RTEPIN_TOFSENSOR_TOF0_XHT_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORTA8 (number 60), TOF0_INT
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_TOFSENSOR_TOF0_INT_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOF0_INT_GPIO_PIN_MASK (1U << 8U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_TOFSENSOR_TOF0_INT_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOF0_INT_PIN 8U                   /*!<@brief PORT pin number */
#define RTEPIN_TOFSENSOR_TOF0_INT_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORTA9 (number 61), TOF1_XHT
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_TOFSENSOR_TOF1_XHT_GPIO GPIOA               /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOF1_XHT_GPIO_PIN_MASK (1U << 9U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_TOFSENSOR_TOF1_XHT_PORT PORTA               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOF1_XHT_PIN 9U                   /*!<@brief PORT pin number */
#define RTEPIN_TOFSENSOR_TOF1_XHT_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PORTA10 (number 62), TOF1_INT
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_TOFSENSOR_TOF1_INT_GPIO GPIOA                /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOF1_INT_GPIO_PIN_MASK (1U << 10U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_TOFSENSOR_TOF1_INT_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOF1_INT_PIN 10U                   /*!<@brief PORT pin number */
#define RTEPIN_TOFSENSOR_TOF1_INT_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*! @name PORTA11 (number 63), TOF2_XHT
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_TOFSENSOR_TOF2_XHT_GPIO GPIOA                /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOF2_XHT_GPIO_PIN_MASK (1U << 11U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_TOFSENSOR_TOF2_XHT_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOF2_XHT_PIN 11U                   /*!<@brief PORT pin number */
#define RTEPIN_TOFSENSOR_TOF2_XHT_PIN_MASK (1U << 11U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*! @name PORTA12 (number 64), TOF2_INT
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_TOFSENSOR_TOF2_INT_GPIO GPIOA                /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOF2_INT_GPIO_PIN_MASK (1U << 12U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_TOFSENSOR_TOF2_INT_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOF2_INT_PIN 12U                   /*!<@brief PORT pin number */
#define RTEPIN_TOFSENSOR_TOF2_INT_PIN_MASK (1U << 12U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*! @name PORTA13 (number 65), TOFn_SDA
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_TOFSENSOR_TOFn_SDA_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOFn_SDA_PIN 13U                   /*!<@brief PORT pin number */
#define RTEPIN_TOFSENSOR_TOFn_SDA_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*! @name PORTA14 (number 66), TOFn_SCL
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_TOFSENSOR_TOFn_SCL_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_TOFSENSOR_TOFn_SCL_PIN 14U                   /*!<@brief PORT pin number */
#define RTEPIN_TOFSENSOR_TOFn_SCL_PIN_MASK (1U << 14U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void RTEPIN_TofSensor(void);

/*! @name PORTA28 (number 79), TCS_INT
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_IMUTCSSENSOR_TCS_INT_GPIO GPIOA                /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_IMUTCSSENSOR_TCS_INT_GPIO_PIN_MASK (1U << 28U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_IMUTCSSENSOR_TCS_INT_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_IMUTCSSENSOR_TCS_INT_PIN 28U                   /*!<@brief PORT pin number */
#define RTEPIN_IMUTCSSENSOR_TCS_INT_PIN_MASK (1U << 28U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTA29 (number 80), IMU_INT
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_IMUTCSSENSOR_IMU_INT_GPIO GPIOA                /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_IMUTCSSENSOR_IMU_INT_GPIO_PIN_MASK (1U << 29U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_IMUTCSSENSOR_IMU_INT_PORT PORTA                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_IMUTCSSENSOR_IMU_INT_PIN 29U                   /*!<@brief PORT pin number */
#define RTEPIN_IMUTCSSENSOR_IMU_INT_PIN_MASK (1U << 29U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTB0 (number 81), IMU_SCL
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_IMUTCSSENSOR_IMU_SCL_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_IMUTCSSENSOR_IMU_SCL_PIN 0U                   /*!<@brief PORT pin number */
#define RTEPIN_IMUTCSSENSOR_IMU_SCL_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PORTB1 (number 82), IMU_SDA
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_IMUTCSSENSOR_IMU_SDA_PORT PORTB               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_IMUTCSSENSOR_IMU_SDA_PIN 1U                   /*!<@brief PORT pin number */
#define RTEPIN_IMUTCSSENSOR_IMU_SDA_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void RTEPIN_ImuTcsSensor(void);

/*! @name PORTD15 (number 144), KEY_SW03
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_SWITCH_KEY_SW03_GPIO GPIOD                /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW03_GPIO_PIN_MASK (1U << 15U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_SWITCH_KEY_SW03_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW03_PIN 15U                   /*!<@brief PORT pin number */
#define RTEPIN_SWITCH_KEY_SW03_PIN_MASK (1U << 15U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PORTD14 (number 143), KEY_SW04
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_SWITCH_KEY_SW04_GPIO GPIOD                /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW04_GPIO_PIN_MASK (1U << 14U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_SWITCH_KEY_SW04_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW04_PIN 14U                   /*!<@brief PORT pin number */
#define RTEPIN_SWITCH_KEY_SW04_PIN_MASK (1U << 14U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PORTD13 (number 142), KEY_SW02
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_SWITCH_KEY_SW02_GPIO GPIOD                /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW02_GPIO_PIN_MASK (1U << 13U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_SWITCH_KEY_SW02_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW02_PIN 13U                   /*!<@brief PORT pin number */
#define RTEPIN_SWITCH_KEY_SW02_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PORTD12 (number 141), KEY_SW05
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_SWITCH_KEY_SW05_GPIO GPIOD                /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW05_GPIO_PIN_MASK (1U << 12U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_SWITCH_KEY_SW05_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW05_PIN 12U                   /*!<@brief PORT pin number */
#define RTEPIN_SWITCH_KEY_SW05_PIN_MASK (1U << 12U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PORTD11 (number 140), KEY_SW01
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_SWITCH_KEY_SW01_GPIO GPIOD                /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW01_GPIO_PIN_MASK (1U << 11U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_SWITCH_KEY_SW01_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW01_PIN 11U                   /*!<@brief PORT pin number */
#define RTEPIN_SWITCH_KEY_SW01_PIN_MASK (1U << 11U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PORTD10 (number 139), KEY_SW06
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_SWITCH_KEY_SW06_GPIO GPIOD                /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW06_GPIO_PIN_MASK (1U << 10U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_SWITCH_KEY_SW06_PORT PORTD                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW06_PIN 10U                   /*!<@brief PORT pin number */
#define RTEPIN_SWITCH_KEY_SW06_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PORTD9 (number 138), KEY_SW
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_SWITCH_KEY_SW00_GPIO GPIOD               /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW00_GPIO_PIN_MASK (1U << 9U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_SWITCH_KEY_SW00_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW00_PIN 9U                   /*!<@brief PORT pin number */
#define RTEPIN_SWITCH_KEY_SW00_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PORTD8 (number 137), KEY_SW07
  @{ */

/* Symbols to be used with GPIO driver */
#define RTEPIN_SWITCH_KEY_SW07_GPIO GPIOD               /*!<@brief GPIO peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW07_GPIO_PIN_MASK (1U << 8U) /*!<@brief GPIO pin mask */

/* Symbols to be used with PORT driver */
#define RTEPIN_SWITCH_KEY_SW07_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_SWITCH_KEY_SW07_PIN 8U                   /*!<@brief PORT pin number */
#define RTEPIN_SWITCH_KEY_SW07_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void RTEPIN_Switch(void);

/*! @name PORTC14 (number 119), AUX_UART4_RX
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_AUXUART_AUX_UART4_RX_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_AUXUART_AUX_UART4_RX_PIN 14U                   /*!<@brief PORT pin number */
#define RTEPIN_AUXUART_AUX_UART4_RX_PIN_MASK (1U << 14U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTC15 (number 120), AUX_UART4_TX
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_AUXUART_AUX_UART4_TX_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_AUXUART_AUX_UART4_TX_PIN 15U                   /*!<@brief PORT pin number */
#define RTEPIN_AUXUART_AUX_UART4_TX_PIN_MASK (1U << 15U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTC16 (number 123), AUX_UART3_RX
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_AUXUART_AUX_UART3_RX_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_AUXUART_AUX_UART3_RX_PIN 16U                   /*!<@brief PORT pin number */
#define RTEPIN_AUXUART_AUX_UART3_RX_PIN_MASK (1U << 16U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTC17 (number 124), AUX_UART3_TX
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_AUXUART_AUX_UART3_TX_PORT PORTC                /*!<@brief PORT peripheral base pointer */
#define RTEPIN_AUXUART_AUX_UART3_TX_PIN 17U                   /*!<@brief PORT pin number */
#define RTEPIN_AUXUART_AUX_UART3_TX_PIN_MASK (1U << 17U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PORTD2 (number 129), AUX_UART2_RX
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_AUXUART_AUX_UART2_RX_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_AUXUART_AUX_UART2_RX_PIN 2U                   /*!<@brief PORT pin number */
#define RTEPIN_AUXUART_AUX_UART2_RX_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*! @name PORTD3 (number 130), AUX_UART2_TX
  @{ */

/* Symbols to be used with PORT driver */
#define RTEPIN_AUXUART_AUX_UART2_TX_PORT PORTD               /*!<@brief PORT peripheral base pointer */
#define RTEPIN_AUXUART_AUX_UART2_TX_PIN 3U                   /*!<@brief PORT pin number */
#define RTEPIN_AUXUART_AUX_UART2_TX_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                             /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void RTEPIN_AuxUart(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
