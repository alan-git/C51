#ifndef _PBDATA_H__
#define _PBDATA_H__

#include <MATH.H>
#include <STDIO.H>
#include <STRING.H>
#include <INTRINS.H>
#include <STC15F2K60S2.H>

/* *******************************************************************************************
/* 1.����оƬѡ��include��оƬͷ�ļ�(���¼��ݣ�һ������²����޸�);
/* 2.ѡ��FOSC�����ʵ��޸�PARAMETER_US&MS����������ѡ���Ƿ�����.C�е�΢�뼶��ʱ����;
/* 3.��STC-ISP�е���1US��ʱ��������.C���滻;
/* 4.�����Ƿ��һ������ģʽѡ���Ƿ�궨��DeveloperMode��
/* 5.���ݹ���״̬��ʾ�Ƶ�λ�ö���LED��LED��ON/OFF(δ����񲻱�����);
/* 6.��������ѡ���Ƿ�������������Σ�λѡ����;
/* N.OVER��
/* ******************************************************************************************* */
#define DeveloperMode
#define USE_SEG

#define PARAMETER_US    13//6       //������ʱʱ����
#define PARAMETER_MS    1400//680   //������ʱʱ����

#define SysLED          P12         //����״̬��ʾ�ƣ�
#define SysLED_ON       0
#define SysLED_OFF      1
#define SysLED_On();    SysLED=SysLED_ON;
#define SysLED_Off();   SysLED=SysLED_OFF;

#define FOSC            FOSC_24     //ϵͳƵ�ʣ�
#define FOSC_33_1176    (33117600L)
#define FOSC_22_1184    (22118400L)
#define FOSC_18_432     (18432000L)		
#define FOSC_11_0592    (11059200L)		
#define FOSC_5_5296     (5529600L)
#define FOSC_33         (33000000L)
#define FOSC_30         (30000000L)
#define FOSC_27         (27000000L)
#define FOSC_24         (24000000L)
#define FOSC_20         (20000000L)
#define FOSC_12         (12000000L)
#define FOSC_6          (6000000L)

#define TRUE    1
#define FALSE   0
#define u8      unsigned char
#define u16     unsigned int
#define u32     unsigned long
#define uchar   unsigned char       //���ݣ�
#define uint    unsigned int        //���ݣ�
#define nop();  _nop_();

#ifdef USE_SEG
#define SEG_NEGATIVE_SIGN   0xBF    //������ʾ��
#define SEG_POINT           0x7F    //С������ʾ��

extern const u8 code W_Scan[8];
extern const u8 code Seg_7[11];     //������������飻
#endif

extern void Delay1US();
extern void DelayUS(u16 x);
extern void DelayMS(u16 x);
extern void SysLED_Flash(u16 time, u8 times);

#endif

/* *******************************************************************************************
/* data  �̶�ָƬ��RAM��    0x00~0x7F
/* bdata �̶�ָƬ��RAM��    0x20~0x2F
/* idata �̶�ָƬ��RAM��    0x00~0xFF
/* xdata һ��ָ��չRAM��    0x0000~0xFFFF��ҲָSTC�ڲ���չRAM��0x0000~0xFFFF
/* code  ָ����洢��ROM��  0x0000~0xFFFF
/* ******************************************************************************************* */

/* *******************************************************************************************
_crol_ �ַ�ѭ������ ����
_cror_ �ַ�ѭ������ ����
_irol_ ����ѭ������ ����
_iror_ ����ѭ������ ����
_lrol_ ������ѭ������ ����
_lror_ ������ѭ������ ����
_nop_ �ղ���8051 NOP ָ��
_testbit_ ���Բ�����λ8051 JBC ָ�� 

��_crol_��_irol_��_lrol_����λ��ʽ��val ѭ������n λ���ú�����8051��RLA��ָ����أ����漸��������ͬ�ڲ������͡�
��_cror_��_iror_��_lror_����λ��ʽ��val ѭ������n λ���ú�����8051��RRA��ָ����أ����漸��������ͬ�ڲ������͡� 
��_nop_��    ����һ��NOP ָ��,�ú���������C �����ʱ��Ƚϡ�C51 ��������_nop_���������ڼ䲻�����������ã����ڳ�����ֱ��ִ����NOP ָ�
��_testbit_������һ��JBC ָ��ú�������һ��λ������λʱ����1�����򷵻�0�������λ��Ϊ1���򽫸�λ��λΪ0��
             8051 ��JBC ָ�������Ŀ�ġ�_testbit_ֻ�����ڿ�ֱ��Ѱַ��λ���ڱ���ʽ��ʹ���ǲ������ġ�
/* ******************************************************************************************* */

/* *******************************************************************************************
Name        : SPIReadByte(void)
Description : ��SPI����
Input       : None
Output      : None
Return      : None
/* ******************************************************************************************* */
