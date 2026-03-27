/*
 * -------------------------------------------------------------------
 * MPLAB Device Blocks for Simulink v3.57b (06-Aug-2024)
 *
 *   Product Page:  https://www.mathworks.com/matlabcentral/fileexchange/71892
 *           Forum: https://forum.microchip.com/s/sub-forums?&subForumId=a553l000000J2rNAAS&forumId=a553l000000J2pvAAC&subForumName=MATLAB
 *           Wiki:  http://microchip.wikidot.com/simulink:start
 * -------------------------------------------------------------------
 * File: project_01_button_led_control.h
 *
 * Code generated for Simulink model 'project_01_button_led_control'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Mar 27 03:23:46 2026
 */

#ifndef project_01_button_led_control_h_
#define project_01_button_led_control_h_
#ifndef project_01_button_led_control_COMMON_INCLUDES_
#define project_01_button_led_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* project_01_button_led_control_COMMON_INCLUDES_ */

#define FCY                            (40000000UL)              /* Instruction Frequency FCY set at  40.0 MHz */

/* Include for pic 33F */
#include <xc.h>
#include <libpic30.h>
/* For possible use with C function Call block (delay_ms or delay_us functions might be used by few peripherals) */
#include "project_01_button_led_control_types.h"

/* Model entry point functions */
extern void project_01_button_led_control_initialize(void);
extern void project_01_button_led_control_step(void);
extern void project_01_button_led_control_terminate(void);

/* Single rate scheduler function */
extern void MCHP_Scheduler(void) __attribute__ ((noreturn));

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'project_01_button_led_control'
 * '<S1>'   : 'project_01_button_led_control/Digital Output'
 */
#endif                                 /* project_01_button_led_control_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
