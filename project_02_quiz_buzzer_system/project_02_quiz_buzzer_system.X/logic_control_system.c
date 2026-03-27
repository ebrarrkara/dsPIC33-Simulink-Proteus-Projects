/*
 * -------------------------------------------------------------------
 * MPLAB Device Blocks for Simulink v3.57b (06-Aug-2024)
 *
 *   Product Page:  https://www.mathworks.com/matlabcentral/fileexchange/71892
 *           Forum: https://forum.microchip.com/s/sub-forums?&subForumId=a553l000000J2rNAAS&forumId=a553l000000J2pvAAC&subForumName=MATLAB
 *           Wiki:  http://microchip.wikidot.com/simulink:start
 * -------------------------------------------------------------------
 * File: logic_control_system.c
 *
 * Code generated for Simulink model 'logic_control_system'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Mar 11 14:15:57 2026
 */

#include "logic_control_system.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW_logic_control_system_T logic_control_system_DW;
volatile uint_T ContinueTimeStep __attribute__ ((near)) = 0;/* Microchip Global Variable for single rate scheduler */

/* Model step function */
void logic_control_system_step(void)
{
  int16_T rowIdx;
  boolean_T rtb_Logic[2];
  boolean_T rtb_Logic_e[2];
  boolean_T rtb_Logic_k[2];
  boolean_T rtb_DigitalInput_o4;
  boolean_T rtb_Memory_f;

  /* S-Function (MCHP_Digital_Input): '<Root>/Digital Input' */
  /* MCHP_Digital_Input Block: <Root>/Digital Input/Output */
  rtb_DigitalInput_o4 = PORTCbits.RC3; /* Read pin C3 */

  /* Switch: '<Root>/Switch5' incorporates:
   *  Constant: '<Root>/button3'
   *  Memory: '<Root>/Memory1'
   *  Memory: '<Root>/Memory2'
   *  S-Function (MCHP_Digital_Input): '<Root>/Digital Input'
   */
  if (logic_control_system_DW.bitsForTID0.Memory2_PreviousInput) {
    rtb_Memory_f = false;
  } else {
    rtb_Memory_f = ((!logic_control_system_DW.bitsForTID0.Memory1_PreviousInput) && PORTCbits.RC0);
  }

  /* End of Switch: '<Root>/Switch5' */

  /* CombinatorialLogic: '<S3>/Logic' incorporates:
   *  Memory: '<S3>/Memory'
   */
  rowIdx = (int16_T)(((((uint16_T)rtb_Memory_f << 1) + rtb_DigitalInput_o4) << 1) +
                     logic_control_system_DW.bitsForTID0.Memory_PreviousInput);
  rtb_Logic[0U] = logic_control_system_ConstP.pooled2[(uint16_T)rowIdx];
  rtb_Logic[1U] = logic_control_system_ConstP.pooled2[(uint16_T)rowIdx + 8U];

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/reset'
   *  Memory: '<Root>/Memory'
   *  Memory: '<Root>/Memory2'
   *  S-Function (MCHP_Digital_Input): '<Root>/Digital Input'
   */
  if (logic_control_system_DW.bitsForTID0.Memory2_PreviousInput) {
    rtb_Memory_f = false;
  } else {
    rtb_Memory_f = ((!logic_control_system_DW.bitsForTID0.Memory_PreviousInput_e) && PORTCbits.RC1);
  }

  /* End of Switch: '<Root>/Switch' */

  /* CombinatorialLogic: '<S2>/Logic' incorporates:
   *  Memory: '<S2>/Memory'
   */
  rowIdx = (int16_T)(((((uint16_T)rtb_Memory_f << 1) + rtb_DigitalInput_o4) << 1) +
                     logic_control_system_DW.bitsForTID0.Memory_PreviousInput_d);
  rtb_Logic_k[0U] = logic_control_system_ConstP.pooled2[(uint16_T)rowIdx];
  rtb_Logic_k[1U] = logic_control_system_ConstP.pooled2[(uint16_T)rowIdx + 8U];

  /* Switch: '<Root>/Switch4' incorporates:
   *  Constant: '<Root>/Constant2'
   *  Memory: '<Root>/Memory'
   *  Memory: '<Root>/Memory1'
   *  S-Function (MCHP_Digital_Input): '<Root>/Digital Input'
   */
  if (logic_control_system_DW.bitsForTID0.Memory1_PreviousInput) {
    rtb_Memory_f = false;
  } else {
    rtb_Memory_f = ((!logic_control_system_DW.bitsForTID0.Memory_PreviousInput_e) && PORTCbits.RC2);
  }

  /* End of Switch: '<Root>/Switch4' */

  /* CombinatorialLogic: '<S4>/Logic' incorporates:
   *  Memory: '<S4>/Memory'
   */
  rowIdx = (int16_T)(((((uint16_T)rtb_Memory_f << 1) + rtb_DigitalInput_o4) << 1) +
                     logic_control_system_DW.bitsForTID0.Memory_PreviousInput_n);
  rtb_Logic_e[0U] = logic_control_system_ConstP.pooled2[(uint16_T)rowIdx];
  rtb_Logic_e[1U] = logic_control_system_ConstP.pooled2[(uint16_T)rowIdx + 8U];

  /* S-Function (MCHP_Digital_Output_Write): '<S1>/Digital Output Write' */
  LATBbits.LATB0 = rtb_Logic[0];
  LATBbits.LATB1 = rtb_Logic_k[0];
  LATBbits.LATB2 = rtb_Logic_e[0];

  /* Update for Memory: '<Root>/Memory2' */
  logic_control_system_DW.bitsForTID0.Memory2_PreviousInput = rtb_Logic_e[0];

  /* Update for Memory: '<Root>/Memory1' */
  logic_control_system_DW.bitsForTID0.Memory1_PreviousInput = rtb_Logic_k[0];

  /* Update for Memory: '<S3>/Memory' */
  logic_control_system_DW.bitsForTID0.Memory_PreviousInput = rtb_Logic[0];

  /* Update for Memory: '<Root>/Memory' */
  logic_control_system_DW.bitsForTID0.Memory_PreviousInput_e = rtb_Logic[0];

  /* Update for Memory: '<S2>/Memory' */
  logic_control_system_DW.bitsForTID0.Memory_PreviousInput_d = rtb_Logic_k[0];

  /* Update for Memory: '<S4>/Memory' */
  logic_control_system_DW.bitsForTID0.Memory_PreviousInput_n = rtb_Logic_e[0];
}

/* Model initialize function */
void logic_control_system_initialize(void)
{
  /* Start for S-Function (MCHP_Master): '<Root>/Microchip Master' */

  /* S-Function "Microchip MASTER" initialization Block: <Root>/Microchip Master */
}

/* Model terminate function */
void logic_control_system_terminate(void)
{
  /* (no terminate code required) */
}

/* Scheduler */
void __attribute__((__interrupt__,__auto_psv__)) _T1Interrupt(void)
{
  {
    extern volatile uint_T ContinueTimeStep __attribute__ ((near)) ;
    __asm__ volatile ( "BSET.b %[MyVar], #0" : [MyVar] "+m" (ContinueTimeStep) ) ;/* Atomic bit-set: ContinueTimeStep |= 1U */
    _T1IF = 0;                         /* Re-enable interrupt */
  }
}

/* Single rate scheduler function */
void MCHP_Scheduler(void)
{
  for (;;) {                           /* Infinite loop, no return */
    while (!ContinueTimeStep) ;

    /* Disable Scheduler Interrupt */
    _IPL0 = 1;                         /* Disable Scheduler Interrupts. Rise IPL from 0 to 1 */
    __asm__ volatile ("BCLR.b %[MyVar], #0" : [MyVar] "+m" (ContinueTimeStep) );/* Atomic bit-clear of ContinueTimeStep bit 1U */

    /* Call model Scheduler */
    /* Step the model for base rate */
    logic_control_system_step();

    /* Get model outputs here */

    /* Re-Enable Scheduler Interrupt */
    _IPL0 = 0;                         /* Enable Scheduler interrupt. Lower IPL from 1 to 0 */
  }                                    /* end infinite loop for(;;) */
}                                      /* End MCHP_Scheduler function */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
