/*
 * -------------------------------------------------------------------
 * MPLAB Device Blocks for Simulink v3.57b (06-Aug-2024)
 *
 *   Product Page:  https://www.mathworks.com/matlabcentral/fileexchange/71892
 *           Forum: https://forum.microchip.com/s/sub-forums?&subForumId=a553l000000J2rNAAS&forumId=a553l000000J2pvAAC&subForumName=MATLAB
 *           Wiki:  http://microchip.wikidot.com/simulink:start
 * -------------------------------------------------------------------
 * File: deney_3.c
 *
 * Code generated for Simulink model 'deney_3'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Mar 27 01:11:52 2026
 */

#include "deney_3.h"
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW_deney_3_T deney_3_DW;
volatile uint_T ContinueTimeStep __attribute__ ((near)) = 0;/* Microchip Global Variable for single rate scheduler */

/* Model step function */
void deney_3_step(void)
{
  real_T rtb_Memory;
  boolean_T rtb_DigitalInput;
  boolean_T rtb_LogicalOperator;

  /* Memory: '<Root>/Memory' */
  rtb_Memory = deney_3_DW.Memory_PreviousInput;

  /* Logic: '<Root>/Logical Operator' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   *  Memory: '<Root>/Memory'
   *  RelationalOperator: '<Root>/GreaterThan'
   *  RelationalOperator: '<Root>/Relational Operator'
   */
  rtb_LogicalOperator = ((deney_3_DW.Memory_PreviousInput > 0.0) && (deney_3_DW.Memory_PreviousInput <= 3.0));

  /* S-Function (MCHP_Digital_Output_Write): '<S1>/Digital Output Write' */
  LATBbits.LATB0 = rtb_LogicalOperator;

  /* S-Function (MCHP_Digital_Input): '<Root>/Digital Input' */
  /* MCHP_Digital_Input Block: <Root>/Digital Input/Output */
  rtb_DigitalInput = PORTCbits.RC0;    /* Read pin C0 */

  /* Outputs for Enabled SubSystem: '<S4>/POSITIVE Edge' incorporates:
   *  EnablePort: '<S6>/Enable'
   */
  if (deney_3_ConstB.MultiportSwitch[0] > 0.0) {
    /* RelationalOperator: '<S6>/Relational Operator1' incorporates:
     *  UnitDelay: '<S4>/Unit Delay'
     */
    deney_3_DW.bitsForTID0.RelationalOperator1 = ((int16_T)rtb_LogicalOperator > (int16_T)
      deney_3_DW.bitsForTID0.UnitDelay_DSTATE);
  }

  /* End of Outputs for SubSystem: '<S4>/POSITIVE Edge' */

  /* Outputs for Enabled SubSystem: '<S4>/NEGATIVE Edge' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  if (deney_3_ConstB.MultiportSwitch[1] > 0.0) {
    /* RelationalOperator: '<S5>/Relational Operator1' incorporates:
     *  UnitDelay: '<S4>/Unit Delay'
     */
    deney_3_DW.bitsForTID0.RelationalOperator1_g = ((int16_T)deney_3_DW.bitsForTID0.UnitDelay_DSTATE >
      (int16_T)rtb_LogicalOperator);
  }

  /* End of Outputs for SubSystem: '<S4>/NEGATIVE Edge' */

  /* CombinatorialLogic: '<S3>/Logic' incorporates:
   *  Logic: '<S4>/Logical Operator1'
   *  Memory: '<S3>/Memory'
   */
  rtb_DigitalInput = deney_3_ConstP.Logic_table[((((uint16_T)rtb_DigitalInput << 1) + (uint16_T)
    (deney_3_DW.bitsForTID0.RelationalOperator1 || deney_3_DW.bitsForTID0.RelationalOperator1_g)) << 1) +
    deney_3_DW.bitsForTID0.Memory_PreviousInput_n];

  /* Switch: '<Root>/Switch' */
  if (rtb_DigitalInput) {
    /* Update for Memory: '<Root>/Memory' incorporates:
     *  Constant: '<Root>/Constant'
     *  Sum: '<Root>/Sum'
     */
    deney_3_DW.Memory_PreviousInput = rtb_Memory + 0.1;
  } else {
    /* Update for Memory: '<Root>/Memory' incorporates:
     *  Constant: '<Root>/Constant3'
     */
    deney_3_DW.Memory_PreviousInput = 0.0;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Update for UnitDelay: '<S4>/Unit Delay' */
  deney_3_DW.bitsForTID0.UnitDelay_DSTATE = rtb_LogicalOperator;

  /* Update for Memory: '<S3>/Memory' */
  deney_3_DW.bitsForTID0.Memory_PreviousInput_n = rtb_DigitalInput;
}

/* Model initialize function */
void deney_3_initialize(void)
{
  /* Start for S-Function (MCHP_Master): '<Root>/Microchip Master' */

  /* S-Function "Microchip MASTER" initialization Block: <Root>/Microchip Master */
}

/* Model terminate function */
void deney_3_terminate(void)
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

    /* Set busy flag */
    LATAbits.LATA0 = 1;                /* pin RA0 = 1 Set Busy Flag PIN */

    /* Call model Scheduler */
    /* Step the model for base rate */
    deney_3_step();

    /* Get model outputs here */

    /* Release busy flag */
    LATAbits.LATA0 = 0;                /* pin RA0 = 0 Release Busy Flag PIN */

    /* Re-Enable Scheduler Interrupt */
    _IPL0 = 0;                         /* Enable Scheduler interrupt. Lower IPL from 1 to 0 */
  }                                    /* end infinite loop for(;;) */
}                                      /* End MCHP_Scheduler function */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
