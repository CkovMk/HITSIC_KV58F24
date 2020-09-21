/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _CLOCK_CONFIG_H_
#define _CLOCK_CONFIG_H_

#include "fsl_common.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define BOARD_XTAL0_CLK_HZ                         48000000U  /*!< Board xtal0 frequency in Hz */

/*******************************************************************************
 ************************ BOARD_InitBootClocks function ************************
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes default configuration of clocks.
 *
 */
void BOARD_InitBootClocks(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 *********************** Configuration RTECLK_HsRun240 *************************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for RTECLK_HsRun240 configuration
 ******************************************************************************/
#define RTECLK_HSRUN240_CORE_CLOCK                240000000U  /*!< Core clock frequency: 240000000Hz */

/*! @brief MCG set for RTECLK_HsRun240 configuration.
 */
extern const mcg_config_t mcgConfig_RTECLK_HsRun240;
/*! @brief SIM module set for RTECLK_HsRun240 configuration.
 */
extern const sim_clock_config_t simConfig_RTECLK_HsRun240;
/*! @brief OSC set for RTECLK_HsRun240 configuration.
 */
extern const osc_config_t oscConfig_RTECLK_HsRun240;

/*******************************************************************************
 * API for RTECLK_HsRun240 configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void RTECLK_HsRun240(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 *********************** Configuration RTECLK_Xtalless *************************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for RTECLK_Xtalless configuration
 ******************************************************************************/
#define RTECLK_XTALLESS_CORE_CLOCK                 80000000U  /*!< Core clock frequency: 80000000Hz */

/*! @brief MCG set for RTECLK_Xtalless configuration.
 */
extern const mcg_config_t mcgConfig_RTECLK_Xtalless;
/*! @brief SIM module set for RTECLK_Xtalless configuration.
 */
extern const sim_clock_config_t simConfig_RTECLK_Xtalless;
/*! @brief OSC set for RTECLK_Xtalless configuration.
 */
extern const osc_config_t oscConfig_RTECLK_Xtalless;

/*******************************************************************************
 * API for RTECLK_Xtalless configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void RTECLK_Xtalless(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

#endif /* _CLOCK_CONFIG_H_ */

