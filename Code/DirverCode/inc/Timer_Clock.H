#ifndef _TIMER_CLOCK_H__
#define _TIMER_CLOCK_H__

#include "INCLUDES.H"
/* *******************************************************************************************
/* 1.����׼ʱ��(TIME_BASE_1ST/2ND)�Ƿ��ܽ�1S������
/* 2.��������Ҫʹ���������ʾʱ��ѡ���Ƿ�궨��USE_SEG_DIS��
/* N.OVER��
/* ******************************************************************************************* */
#define USE_SEG_DIS

extern char Hour, Min, Sec;     //ʱ���룻
extern void Timer_Clock_Init(); //ʱ��ʱ�ӳ�ʼ����
extern void Timer_Clock();      //ʱ��ʱ�Ӽ�ʱ������

#ifdef USE_SEG_DIS
extern u8 TimeSEG[8];
extern void Transf_TimeSEG();
#endif


#endif