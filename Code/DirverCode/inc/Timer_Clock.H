#ifndef _TIMER_CLOCK_H__
#define _TIMER_CLOCK_H__

#include "INCLUDES.H"
/* *******************************************************************************************
/* 1.检查基准时间(TIME_BASE_1ST/2ND)是否能将1S整除；
/* 2.根据是需要使用数码管显示时间选择是否宏定义USE_SEG_DIS；
/* N.OVER；
/* ******************************************************************************************* */
#define USE_SEG_DIS

extern char Hour, Min, Sec;     //时分秒；
extern void Timer_Clock_Init(); //时间时钟初始化；
extern void Timer_Clock();      //时间时钟计时函数；

#ifdef USE_SEG_DIS
extern u8 TimeSEG[8];
extern void Transf_TimeSEG();
#endif


#endif
