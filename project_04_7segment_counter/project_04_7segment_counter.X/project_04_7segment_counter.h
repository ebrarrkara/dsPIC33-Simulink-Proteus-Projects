/*
 * -------------------------------------------------------------------
 * MPLAB Device Blocks for Simulink v3.57b (06-Aug-2024)
 *
 *   Product Page:  https://www.mathworks.com/matlabcentral/fileexchange/71892
 *           Forum: https://forum.microchip.com/s/sub-forums?&subForumId=a553l000000J2rNAAS&forumId=a553l000000J2pvAAC&subForumName=MATLAB
 *           Wiki:  http://microchip.wikidot.com/simulink:start
 * -------------------------------------------------------------------
 * File: project_04_7segment_counter.h
 *
 * Code generated for Simulink model 'project_04_7segment_counter'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Mar 27 19:46:51 2026
 */

#ifndef project_04_7segment_counter_h_
#define project_04_7segment_counter_h_
#ifndef project_04_7segment_counter_COMMON_INCLUDES_
#define project_04_7segment_counter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* project_04_7segment_counter_COMMON_INCLUDES_ */

#define FCY                            (40000000UL)              /* Instruction Frequency FCY set at  40.0 MHz */

/* Include for pic 33F */
#include <xc.h>
#include <libpic30.h>
/* For possible use with C function Call block (delay_ms or delay_us functions might be used by few peripherals) */
#include "project_04_7segment_counter_types.h"

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T Memory_PreviousInput;         /* '<Root>/Memory' */
  struct {
    uint_T Memory_PreviousInput_f:1;   /* '<S3>/Memory' */
  } bitsForTID0;
} DW_project_04_7segment_counter_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: [63 6 91 79 102 109 125 7 127 111]
   * Referenced by: '<Root>/Constant5'
   */
  real_T Constant5_Value[10];

  /* Computed Parameter: Logic_table
   * Referenced by: '<S3>/Logic'
   */
  boolean_T Logic_table[16];
} ConstP_project_04_7segment_counter_T;

/* Block signals and states (default storage) */
extern DW_project_04_7segment_counter_T project_04_7segment_counter_DW;

/* Constant parameters (default storage) */
extern const ConstP_project_04_7segment_counter_T project_04_7segment_counter_ConstP;

/* Model entry point functions */
extern void project_04_7segment_counter_initialize(void);
extern void project_04_7segment_counter_step(void);
extern void project_04_7segment_counter_terminate(void);

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
 * '<Root>' : 'project_04_7segment_counter'
 * '<S1>'   : 'project_04_7segment_counter/Digital Output'
 * '<S2>'   : 'project_04_7segment_counter/Digital Output1'
 * '<S3>'   : 'project_04_7segment_counter/S-R Flip-Flop'
 */
#endif                                 /* project_04_7segment_counter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
