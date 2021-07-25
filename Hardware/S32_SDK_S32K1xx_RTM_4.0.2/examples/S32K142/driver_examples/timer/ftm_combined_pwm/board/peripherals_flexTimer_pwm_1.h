/***********************************************************************************************************************
 * This file was generated by the S32 Config Tools. Any manual edits made to this file
 * will be overwritten if the respective S32 Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef flexTimer_pwm_1_H
#define flexTimer_pwm_1_H

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, Global macro not referenced.
 * The global macro will be used in function call of the module.
 *
 */
/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "ftm_pwm_driver.h"

/*******************************************************************************
 * Definitions 
 ******************************************************************************/
/*! @brief Device instance number */
#define INST_FLEXTIMER_PWM_1  0U


/*******************************************************************************
 * Global variables 
 ******************************************************************************/

/* Fault configuration structure for flexTimer_pwm_1 */
extern ftm_pwm_fault_param_t flexTimer_pwm_1_FaultConfig;

/* PWM configuration for flexTimer_pwm_1 */
extern ftm_pwm_param_t flexTimer_pwm_1_PwmConfig;

/* Channels configuration structure for the combined channels */
extern ftm_combined_ch_param_t flexTimer_pwm_1_CombinedChannelsConfig[1];

/* Global configuration of flexTimer */
extern ftm_user_config_t flexTimer_pwm_1_InitConfig;



#endif /* flexTimer_pwm_1_H */