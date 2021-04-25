/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *	m12193.c
 *
 * Project:
 * --------
 *  MT6261
 *
 * Description:
 * ------------
 *  MT6261 Power Ramp Table
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *
 *******************************************************************************/

#include "l1d_cid.h"
#include "m12190.h"
#include "l1d_custom_rf.h"

/*===============================================================================================*/
#if( (!defined(MT2503RF_RF)) )
   #error "rf files mismatch with compile option!"
#endif

#if ( defined(__GSM450__) || defined(__GSM480__) )
   #error "RF EVB doesn't support this designated band configuration!"
#endif

#if IS_CHIP_MT6218_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
/*----------------------------------------*/
/* Calibration data for path loss of gain */
/*----------------------------------------*/

/* GSM850....................................................................*/
#if defined __GT300S__
sAGCGAINOFFSET  AGC_PATHLOSS_GSM850[ PLTABLE_SIZE ] =
{   {  128,  GAINLOSS( 1.0 ) },
    {  170,  GAINLOSS( 1.0 ) },
    {  190,  GAINLOSS( 1.125 ) },
    {  210,  GAINLOSS( 1.25 ) },
    {  230,  GAINLOSS( 1.25 ) },
    {  251,  GAINLOSS( 1.375 ) },
    /*-------------------------*/
    { TABLE_END }
};
#else
sAGCGAINOFFSET  AGC_PATHLOSS_GSM850[ PLTABLE_SIZE ] =
{   {  150,  GAINLOSS( 0.0 ) },
    {  170,  GAINLOSS( 0.0 ) },
    {  190,  GAINLOSS( 0.0 ) },
    {  210,  GAINLOSS( 0.0 ) },
    {  230,  GAINLOSS( 0.0 ) },
    {  251,  GAINLOSS( 0.0 ) },
    /*-------------------------*/
    { TABLE_END }
};
#endif
/* GSM900....................................................................*/
#if defined __GT300S__
sAGCGAINOFFSET  AGC_PATHLOSS_GSM900[ PLTABLE_SIZE ] =
{  {   1,  GAINLOSS( 1.875 ) },
	{   31,  GAINLOSS( 2.0 ) },
    {   43,  GAINLOSS( 2.0 ) },
    {   77,  GAINLOSS( 2.125 ) },
    {  100,  GAINLOSS( 2.125 ) },
    {  124,  GAINLOSS( 2.125 ) },
    { 1023,  GAINLOSS( 1.875 ) },
    /*-------------------------*/
    { TABLE_END }
};
#else
sAGCGAINOFFSET  AGC_PATHLOSS_GSM900[ PLTABLE_SIZE ] =
{   {   31,  GAINLOSS( 0.0 ) },
    {   43,  GAINLOSS( 0.0 ) },
    {   77,  GAINLOSS( 0.0 ) },
    {  100,  GAINLOSS( 0.0 ) },
    {  124,  GAINLOSS( 0.0 ) },
    { 1023,  GAINLOSS( 0.0 ) },
    /*-------------------------*/
    { TABLE_END }
};
#endif
/* DCS1800....................................................................*/
#if defined __GT300S__
sAGCGAINOFFSET  AGC_PATHLOSS_DCS1800[ PLTABLE_SIZE ] =
{   {  512, GAINLOSS( 1.5 ) },
    {  530, GAINLOSS( 1.5 ) },
    {  550, GAINLOSS( 1.5 ) },
    {  580, GAINLOSS( 1.5 ) },
    {  650, GAINLOSS( 1.5 ) },
    {  680, GAINLOSS( 1.375 ) },
    {  710, GAINLOSS( 1.375) },
    {  760, GAINLOSS( 1.375 ) },
    {  830, GAINLOSS( 1.375 ) },
    {  885, GAINLOSS( 1.5 ) },
    /*-------------------------*/
    { TABLE_END }
};
#else
sAGCGAINOFFSET  AGC_PATHLOSS_DCS1800[ PLTABLE_SIZE ] =
{   {  515, GAINLOSS( 0.0 ) },
    {  530, GAINLOSS( 0.0 ) },
    {  550, GAINLOSS( 0.0 ) },
    {  580, GAINLOSS( 0.0 ) },
    {  650, GAINLOSS( 0.0 ) },
    {  680, GAINLOSS( 0.0 ) },
    {  710, GAINLOSS( 0.0 ) },
    {  760, GAINLOSS( 0.0 ) },
    {  830, GAINLOSS( 0.0 ) },
    {  885, GAINLOSS( 0.0 ) },
    /*-------------------------*/
    { TABLE_END }
};
#endif


/* PCS1900....................................................................*/

#if defined __GT300S__
sAGCGAINOFFSET  AGC_PATHLOSS_PCS1900[ PLTABLE_SIZE ] =
{   {  512, GAINLOSS( 1.375 ) },
	{  550, GAINLOSS( 1.375 ) },
	{  600, GAINLOSS( 1.375 ) },
	{  700, GAINLOSS( 1.375 ) },
	{  750, GAINLOSS( 1.375 ) },
    {  810, GAINLOSS( 1.5 ) },
    /*-------------------------*/
    { TABLE_END }
};
#else
sAGCGAINOFFSET  AGC_PATHLOSS_PCS1900[ PLTABLE_SIZE ] =
{   {  550, GAINLOSS( 0.0 ) },
    {  810, GAINLOSS( 0.0 ) },
    /*-------------------------*/
    { TABLE_END }
};
#endif
/*...........................................................................*/

sAGCGAINOFFSET*  AGC_PATHLOSS_TABLE[] =
{  0,                                 /* FrequencyBand400  */
   AGC_PATHLOSS_GSM850,               /* FrequencyBand850  */
   AGC_PATHLOSS_GSM900,               /* FrequencyBand900  */
   AGC_PATHLOSS_DCS1800,              /* FrequencyBand1800 */
   AGC_PATHLOSS_PCS1900,              /* FrequencyBand1900 */
};

/*----------------------------------------*/
/* Calibration data for power ramp        */
/*----------------------------------------*/

#define  APC_DC_OFFSET   70

#if defined(__SLIM_CALIBRATION_DATA__)
const sRAMPDATA_DEFAULT RampData_Default =
{
   /*-------------------------------------------------------------------------------------------*/
   /* lowest power */
   ((APC_DC_OFFSET)<<8) | 5,
   /*-------------------------------------------------------------------------------------------*/
   /* power level  */
   /*   5,   7,   9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                     */
   {  101,108,116,126,138,152,168,188,213,244,285,335,398,456,551,551},
   /*-------------------------------------------------------------------------------------------*/
   /* profile  0 :  5 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
   {  /* ramp up   */ {  {  0,0,0,0,0,0,0,0,0,0,28,57,95,183,247,255},
      /* ramp down */    {  255,216,191,92,11,0,0,0,0,0,0,0,0,0,0,0  }  }
   }, /*-------------------------------------------------------------------------------------*/
};
#endif

/* GSM850....................................................................*/

sRAMPDATA  GSM850_RampData =
{
#if defined(__SLIM_CALIBRATION_DATA__)
   0,
#else
   /*-------------------------------------------------------------------------------------------*/
   /* lowest power */
   ((APC_DC_OFFSET)<<8) | 5,
   /*-------------------------------------------------------------------------------------------*/
   /* power level  */
   /*  5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                        */
   /* JP {  62, 72, 85, 100, 117,135,160,190,227,270,333,405,495,610,700,700 }, */
           {93,100,108,116,127,138,153,170,192,218,251,294,359,439,578,578},
/*-------------------------------------------------------------------------------------------*/
   {
      /* profile  0 :  5 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,49,93,160,211,255,255},
         /* ramp down */    {255,255,210,155,83,22,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  1 :  7 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,1,48,97,152,196,255,255},
         /* ramp down */    {255,255,211,119,48,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  2 :  9 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,35,86,146,210,255,255},
         /* ramp down */    {255,255,196,146,93,44,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  3 : 11 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,45,146,231,255,255},
         /* ramp down */    {255,255,174,87,6,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  4 : 13 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,40,104,186,255,255},
         /* ramp down */    {255,255,187,120,45,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  5 : 15 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,40,102,208,255,255},
         /* ramp down */    {255,255,173,119,49,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  6 : 17 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,44,114,196,255,255},
         /* ramp down */    {255,255,156,94,30,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  7 : 19 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,46,124,201,255,255},
         /* ramp down */    {255,255,161,86,0,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  8 : 21 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,49,131,194,255,255},
         /* ramp down */    {255,255,168,105,40,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  9 : 23 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,15,71,164,255,255},
         /* ramp down */    {255,255,160,47,5,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 10 : 25 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,15,71,163,255,255},
         /* ramp down */    {255,255,160,47,5,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 11 : 27 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,15,71,162,255,255},
         /* ramp down */    {255,255,160,47,5,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 12 : 29 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,15,71,162,255,255},
         /* ramp down */    {255,255,160,47,5,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 13 : 31 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,15,71,161,255,255 },
         /* ramp down */    {255,255,160,47,5,0,0,0,0,0,0,0,0,0,0,0 } }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 14 : 33 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,15,71,163,255,255},
         /* ramp down */    {255,255,160,47,5,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 15 : 35 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,0,25,144,248,255},
         /* ramp down */    {255,242,116,0,0,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
   },
   /* ARFCN WEIGHT */
   {  /* max arfcn , mid_level ,  hi_weight   ,  lo_weight   */
      {        150 ,        16 , WEIGHT(1.000), WEIGHT(1.000) },
      {        170 ,        16 , WEIGHT(1.000), WEIGHT(1.000) },
      {        190 ,        16 , WEIGHT(1.000), WEIGHT(1.000) },
      {        210 ,        16 , WEIGHT(1.000), WEIGHT(1.000) },
      {        230 ,        16 , WEIGHT(1.000), WEIGHT(1.000) },
      {        251 ,        16 , WEIGHT(1.000), WEIGHT(1.000) },
      /*------------------------------------------------------*/
      { TABLE_END }
   },
   /* Battery WEIGHT */
   {  /*      low temp,       mid temp,        hi temp */
      {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* low volt */
      {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* mid volt */
      {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /*  hi volt */
   },
#endif
};


/* GSM900....................................................................*/

sRAMPDATA  GSM_RampData =
{
#if defined(__SLIM_CALIBRATION_DATA__)
   0,
#else
   /*-------------------------------------------------------------------------------------------*/
   /* lowest power */
   ((APC_DC_OFFSET)<<8) | 5,
   /*-------------------------------------------------------------------------------------------*/
   /* power level  */
   /*  5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                        */
   {  88,95,102,109,118,128,140,155,173,194,221,255,305,369,477,477},
   /*-------------------------------------------------------------------------------------------*/
   {
      /* profile  0 :  5 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,35,80,141,210,255,255},
         /* ramp down */    {255,255,204,133,75,35,0,0,0,0,0,0,0,0,0,0 } }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  1 :  7 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,30,69,114,180,255,255},
         /* ramp down */    {255,255,206,143,80,36,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  2 :  9 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,28,74,108,194,255,255},
         /* ramp down */    {255,255,200,126,60,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  3 : 11 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,25,74,109,183,255,255},
         /* ramp down */    {255,255,188,97,40,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  4 : 13 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,10,32,73,126,186,255,255},
         /* ramp down */    {255,255,216,120,65,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  5 : 15 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,31,74,131,186,255,255},
         /* ramp down */    {255,255,195,131,60,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  6 : 17 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,44,83,125,215,255,255},
         /* ramp down */    {255,255,182,114,29,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  7 : 19 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,51,111,164,255,255},
         /* ramp down */    {255,255,175,88,25,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  8 : 21 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,52,102,164,255,255},
         /* ramp down */    {255,255,156,91,10,0,0,0,0,0,0,0,0,0,0,0 } }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  9 : 23 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,19,62,123,189,255,255},
         /* ramp down */    {255,255,164,55,0,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 10 : 25 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,28,57,95,160,255,255},
         /* ramp down */    {255,240,184,68,12,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 11 : 27 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,28,57,95,160,232,255},
         /* ramp down */    {255,240,184,68,12,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 12 : 29 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,28,57,95,160,232,255},
         /* ramp down */    {255,240,184,68,12,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 13 : 31 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,28,57,95,160,232,255},
         /* ramp down */    {255,240,184,68,12,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 14 : 33 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,28,57,95,160,232,255},
         /* ramp down */    {255,240,184,68,12,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 15 : 35 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,0,40,217,255,255},
         /* ramp down */    {255,238,112,0,0,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
   },
   /* ARFCN WEIGHT */
   {  /* max arfcn , mid_level ,  hi_weight   ,  lo_weight   */
      {         40 ,        16 , WEIGHT(1.000), WEIGHT(1.000) },
      {         82 ,        16 , WEIGHT(1.000), WEIGHT(1.000) },
      {        124 ,        16 , WEIGHT(1.01996), WEIGHT(1.000) },
      {       1000 ,        16 , WEIGHT(1.000), WEIGHT(1.000) },
      {       1023 ,        16 , WEIGHT(1.000), WEIGHT(1.000) },
      /*------------------------------------------------------*/
      { TABLE_END }
   },
   /* Battery WEIGHT */
   {  /*      low temp,       mid temp,        hi temp */
      {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* low volt */
      {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* mid volt */
      {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /*  hi volt */
   },
#endif /*defined(__SLIM_CALIBRATION_DATA__)*/
};


/* DCS1800....................................................................*/

sRAMPDATA  DCS_RampData =
{
#if defined(__SLIM_CALIBRATION_DATA__)
   0,
#else
   /*-------------------------------------------------------------------------------------------*/
   /* lowest power */
   ((APC_DC_OFFSET)<<8) | 0,
   /*-------------------------------------------------------------------------------------------*/
   /* power level  */
   /*    0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                      */
   {    97,106,112,120,129,141,156,174,196,223,255,295,348,421,519,676 },
   /*-------------------------------------------------------------------------------------------*/
   {
      /* profile  0 :  0 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,28,83,156,255,255,255},
         /* ramp down */    {255,255,211,150,68,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  1 :  2 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,48,111,172,255,255,255},
         /* ramp down */    {255,255,163,94,30,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  2 :  4 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,53,117,186,255,255},
         /* ramp down */    {255,255,190,120,60,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  3 :  6 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,1,40,102,227,255,255},
         /* ramp down */    {255,255,182,93,44,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  4 :  8 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,57,98,174,255,255},
         /* ramp down */    {255,255,169,94,53,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  5 : 10 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,36,67,120,216,255,255},
         /* ramp down */    {255,255,159,86,32,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  6 : 12 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,8,30,101,203,255,255 },
         /* ramp down */    {255,255,144,59,13,0,0,0,0,0,0,0,0,0,0,0 } }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  7 : 14 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,27,95,225,255,255},
         /* ramp down */    {255,255,144,41,13,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  8 : 16 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,47,123,208,255,255},
         /* ramp down */    {255,255,144,41,13,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  9 : 18 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,36,97,197,255,255},
         /* ramp down */    {255,255,144,41,13,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 10 : 20 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,26,91,212,255,255},
         /* ramp down */    {255,255,146,41,13,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 11 : 22 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,15,41,104,197,255,255},
         /* ramp down */    {255,255,144,41,13,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 12 : 24 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,33,81,191,255,255},
         /* ramp down */    {255,255,155,56,26,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 13 : 26 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,38,93,182,255,255},
         /* ramp down */    {255,255,127,39,14,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 14 : 28 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,42,94,186,255,255},
         /* ramp down */    {255,255,144,41,13,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 15 : 30 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,34,114,219,255,255},
         /* ramp down */    {255,255,103,31,4,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
   },
   /* ARFCN WEIGHT */
   {  /* max arfcn , mid_level ,  hi_weight   ,  lo_weight   */
      {        520 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        560 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        600 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        630 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        660 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        680 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        720 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        730 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        750 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        800 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        885 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      /*------------------------------------------------------*/
      { TABLE_END }
   },
   /* Battery WEIGHT */
   {  /*      low temp,       mid temp,        hi temp */
      {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* low volt */
      {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* mid volt */
      {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /*  hi volt */
   },
#endif /*defined(__SLIM_CALIBRATION_DATA__)*/
};


/* PCS1900....................................................................*/

sRAMPDATA  PCS_RampData =
{
#if defined(__SLIM_CALIBRATION_DATA__)
   0,
#else
   /*-------------------------------------------------------------------------------------------*/
   /* lowest power */
   ((APC_DC_OFFSET)<<8) | 0,
   /*-------------------------------------------------------------------------------------------*/
   /* power level  */
   /*    0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                      */
   {    94,103,109,117,125,137,152,170,192,219,253,292,338,404,486,627 },
   /*-------------------------------------------------------------------------------------------*/
   {
      /* profile  0 :  0 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,59,123,188,255,255 },
         /* ramp down */    {255,255,180,128,76,0,0,0,0,0,0,0,0,0,0,0 } }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  1 :  2 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,68,126,186,255,255 },
         /* ramp down */    {255,255,186,113,72,0,0,0,0,0,0,0,0,0,0,0 } }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  2 :  4 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,31,75,122,179,255,255 },
         /* ramp down */    {255,255,181,117,45,0,0,0,0,0,0,0,0,0,0,0 } }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  3 :  6 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,26,71,122,203,255,255},
         /* ramp down */    {255,255,200,124,60,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  4 :  8 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,34,80,105,175,255,255},
         /* ramp down */    {255,255,172,98,35,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  5 : 10 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,36,89,105,166,255,255},
         /* ramp down */    {255,255,163,108,44,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  6 : 12 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,23,83,98,160,255,255},
         /* ramp down */    {255,255,165,106,53,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  7 : 14 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,22,75,96,160,255,255},
         /* ramp down */    {255,255,168,102,51,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  8 : 16 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,18,71,86,161,255,255},
         /* ramp down */    {255,255,168,83,31,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  9 : 18 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,61,95,181,255,255},
         /* ramp down */    {255,255,177,115,51,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 10 : 20 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,56,98,182,255,255},
         /* ramp down */    {255,255,169,89,51,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 11 : 22 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,0,62,108,155,255,255},
         /* ramp down */    {255,255,150,83,42,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 12 : 24 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,17,54,84,142,241,255},
         /* ramp down */    {255,255,146,84,34,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 13 : 26 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,13,35,62,165,255,255},
         /* ramp down */    {255,255,151,60,13,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 14 : 28 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,0,15,34,88,180,238,255},
         /* ramp down */    {255,249,139,48,0,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 15 : 30 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {0,0,0,0,0,0,0,0,0,10,17,37,106,210,244,255},
         /* ramp down */    {255,251,112,22,0,0,0,0,0,0,0,0,0,0,0,0} }
      }, /*-------------------------------------------------------------------------------------*/
   },
   /* ARFCN WEIGHT */
   {  /* max arfcn , mid_level ,  hi_weight   ,  lo_weight   */
      {        520 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        560 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        600 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        630 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        660 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        680 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        720 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        730 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        750 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        800 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      {        810 ,         12 , WEIGHT(1.000), WEIGHT(1.000) },
      /*------------------------------------------------------*/
      { TABLE_END }
   },
   /* Battery WEIGHT */
   {  /*      low temp,        mid temp,       hi temp */
      {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* low volt */
      {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* mid volt */
      {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /*  hi volt */
   },
#endif /*defined(__SLIM_CALIBRATION_DATA__)*/
};

/*..........................................................................*/

sRAMPDATA*  RampData[] =
{
   0,                                 /* FrequencyBand400 (not support)  */
   &GSM850_RampData,                  /* FrequencyBand850                */
   &GSM_RampData,                     /* FrequencyBand900                */
   &DCS_RampData,                     /* FrequencyBand1800               */
   &PCS_RampData,                     /* FrequencyBand1900               */
};

#undef  APC_DC_OFFSET

/*=========================================================================================*/

#if IS_GPRS
   #if defined(__SLIM_CALIBRATION_DATA__)
/*GPRS*/ sMIDRAMPDATA  GSM850_InterRampData = { 0 };
/*GPRS*/ sMIDRAMPDATA  GSM_InterRampData    = { 0 };
/*GPRS*/ sMIDRAMPDATA  DCS_InterRampData    = { 0 };
/*GPRS*/ sMIDRAMPDATA  PCS_InterRampData    = { 0 };
   #else
/*GPRS*/ sMIDRAMPDATA  GSM850_InterRampData = { 255,255,255,255,255,222,158,104,  0,  0,  0,  0,  0, 80,186,255 };
/*GPRS*/ sMIDRAMPDATA  GSM_InterRampData    = { 255,255,255,255,255,222,158,104,  0,  0,  0,  0,  0, 80,186,255 };
/*GPRS*/ sMIDRAMPDATA  DCS_InterRampData    = { 255,255,255,255,233,188,126, 48,  0,  0,  0,  0, 56, 93,217,255 };
/*GPRS*/ sMIDRAMPDATA  PCS_InterRampData    = { 255,255,255,255,233,188,126, 48,  0,  0,  0,  0, 56, 93,217,255 };
   #endif
/*GPRS*/ sMIDRAMPDATA*  InterRampData[] = {  0,                     /* FrequencyBand400 (not support)  */
/*GPRS*/                                     &GSM850_InterRampData, /* FrequencyBand850                */
/*GPRS*/                                     &GSM_InterRampData,    /* FrequencyBand900                */
/*GPRS*/                                     &DCS_InterRampData,    /* FrequencyBand1800               */
/*GPRS*/                                     &PCS_InterRampData,    /* FrequencyBand1900               */
/*GPRS*/                                  };
/*GPRS*/
#else
/*GSM*/  sMIDRAMPDATA*  InterRampData[] = {  0,0,0,0,0 };
#endif  // IS_GPRS

/*===============================================================================================*/
#endif

