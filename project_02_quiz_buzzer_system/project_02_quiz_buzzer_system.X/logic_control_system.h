/*
 * -------------------------------------------------------------------
 * MPLAB Device Blocks for Simulink v3.57b (06-Aug-2024)
 *
 *   Product Page:  https://www.mathworks.com/matlabcentral/fileexchange/71892
 *           Forum: https://forum.microchip.com/s/sub-forums?&subForumId=a553l000000J2rNAAS&forumId=a553l000000J2pvAAC&subForumName=MATLAB
 *           Wiki:  http://microchip.wikidot.com/simulink:start
 * -------------------------------------------------------------------
 * File: logic_control_system.h
 *
 * Code generated for Simulink model 'logic_control_system'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Mar 11 14:15:57 2026
 */

#ifndef logic_control_system_h_
#define logic_control_system_h_
#ifndef logic_control_system_COMMON_INCLUDES_
#define logic_control_system_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* logic_control_system_COMMON_INCLUDES_ */

#define FCY                            (40000000UL)              /* Instruction Frequency FCY set at  40.0 MHz */

/* Include for pic 33F */
#include <xc.h>
#include <libpic30.h>
/* For possible use with C function Call block (delay_ms or delay_us functions might be used by few peripherals) */
#include "logic_control_system_types.h"

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  struct {
    uint_T Memory2_PreviousInput:1;    /* '<Root>/Memory2' */
    uint_T Memory1_PreviousInput:1;    /* '<Root>/Memory1' */
    uint_T Memory_PreviousInput:1;     /* '<S3>/Memory' */
    uint_T Memory_PreviousInput_e:1;   /* '<Root>/Memory' */
    uint_T Memory_PreviousInput_d:1;   /* '<S2>/Memory' */
    uint_T Memory_PreviousInput_n:1;   /* '<S4>/Memory' */
  } bitsForTID0;
} DW_logic_control_system_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: [0 1;1 0;0 1;0 1;1 0;1 0;0 0;0 0])
   * Referenced by:
   *   '<S2>/Logic'
   *   '<S3>/Logic'
   *   '<S4>/Logic'
   */
  boolean_T pooled2[16];
} ConstP_logic_control_system_T;

/* Block signals and states (default storage) */
extern DW_logic_control_system_T logic_control_system_DW;

/* Constant parameters (default storage) */
extern const ConstP_logic_control_system_T logic_control_system_ConstP;

/* Model entry point functions */
extern void logic_control_system_initialize(void);
extern void logic_control_system_step(void);
extern void logic_control_system_terminate(void);

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
 * '<Root>' : 'logic_control_system'
 * '<S1>'   : 'logic_control_system/Digital Output'
 * '<S2>'   : 'logic_control_system/S-R Flip-Flop'
 * '<S3>'   : 'logic_control_system/S-R Flip-Flop1'
 * '<S4>'   : 'logic_control_system/S-R Flip-Flop2'
 */
#endif                                 /* logic_control_system_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
