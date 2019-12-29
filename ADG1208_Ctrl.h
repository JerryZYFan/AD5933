#ifndef __ADG1208_CTRL_H__
#define __ADG1208_CTRL_H__





#include "headfile.h"


#define        ADG1208_ChannelMax         8
#define        ADG1208_ChannelMin         1


#define        ADG1208_1A0         GPIO_Pin_5
#define        ADG1208_1A1         GPIO_Pin_6
#define        ADG1208_1A2         GPIO_Pin_7
#define        ADG1208_2A0         GPIO_Pin_13
#define        ADG1208_2A1         GPIO_Pin_14
#define        ADG1208_2A2         GPIO_Pin_15


#define        ADG1208_1S1_Selected           GPIO_ResetBits(GPIOB,ADG1208_1A2);GPIO_ResetBits(GPIOB,ADG1208_1A1);GPIO_ResetBits(GPIOB,ADG1208_1A0);//A2=0;A1=0;A0=0
#define        ADG1208_1S2_Selected           GPIO_ResetBits(GPIOB,ADG1208_1A2);GPIO_ResetBits(GPIOB,ADG1208_1A1);GPIO_SetBits(GPIOB,ADG1208_1A0);//A2=0;A1=0;A0=1
#define        ADG1208_1S3_Selected           GPIO_ResetBits(GPIOB,ADG1208_1A2);GPIO_SetBits(GPIOB,ADG1208_1A1);GPIO_ResetBits(GPIOB,ADG1208_1A0);//A2=0;A1=1;A0=0
#define        ADG1208_1S4_Selected           GPIO_ResetBits(GPIOB,ADG1208_1A2);GPIO_SetBits(GPIOB,ADG1208_1A1);GPIO_SetBits(GPIOB,ADG1208_1A0);//A2=0;A1=1;A0=1
#define        ADG1208_1S5_Selected           GPIO_SetBits(GPIOB,ADG1208_1A2);GPIO_ResetBits(GPIOB,ADG1208_1A1);GPIO_ResetBits(GPIOB,ADG1208_1A0);//A2=1;A1=0;A0=0
#define        ADG1208_1S6_Selected           GPIO_SetBits(GPIOB,ADG1208_1A2);GPIO_ResetBits(GPIOB,ADG1208_1A1);GPIO_SetBits(GPIOB,ADG1208_1A0);//A2=1;A1=0;A0=1
#define        ADG1208_1S7_Selected           GPIO_SetBits(GPIOB,ADG1208_1A2);GPIO_SetBits(GPIOB,ADG1208_1A1);GPIO_ResetBits(GPIOB,ADG1208_1A0);//A2=1;A1=1;A0=0
#define        ADG1208_1S8_Selected           GPIO_SetBits(GPIOB,ADG1208_1A2);GPIO_SetBits(GPIOB,ADG1208_1A1);GPIO_SetBits(GPIOB,ADG1208_1A0);//A2=1;A1=1;A0=1



#define        ADG1208_2S1_Selected           GPIO_ResetBits(GPIOB,ADG1208_2A2);GPIO_ResetBits(GPIOB,ADG1208_2A1);GPIO_ResetBits(GPIOB,ADG1208_2A0);//A2=0;A1=0;A0=0
#define        ADG1208_2S2_Selected           GPIO_ResetBits(GPIOB,ADG1208_2A2);GPIO_ResetBits(GPIOB,ADG1208_2A1);GPIO_SetBits(GPIOB,ADG1208_2A0);//A2=0;A1=0;A0=1
#define        ADG1208_2S3_Selected           GPIO_ResetBits(GPIOB,ADG1208_2A2);GPIO_SetBits(GPIOB,ADG1208_2A1);GPIO_ResetBits(GPIOB,ADG1208_2A0);//A2=0;A1=1;A0=0
#define        ADG1208_2S4_Selected           GPIO_ResetBits(GPIOB,ADG1208_2A2);GPIO_SetBits(GPIOB,ADG1208_2A1);GPIO_SetBits(GPIOB,ADG1208_2A0);//A2=0;A1=1;A0=1
#define        ADG1208_2S5_Selected           GPIO_SetBits(GPIOB,ADG1208_2A2);GPIO_ResetBits(GPIOB,ADG1208_2A1);GPIO_ResetBits(GPIOB,ADG1208_2A0);//A2=1;A1=0;A0=0
#define        ADG1208_2S6_Selected           GPIO_SetBits(GPIOB,ADG1208_2A2);GPIO_ResetBits(GPIOB,ADG1208_2A1);GPIO_SetBits(GPIOB,ADG1208_2A0);//A2=1;A1=0;A0=1
#define        ADG1208_2S7_Selected           GPIO_SetBits(GPIOB,ADG1208_2A2);GPIO_SetBits(GPIOB,ADG1208_2A1);GPIO_ResetBits(GPIOB,ADG1208_2A0);//A2=1;A1=1;A0=0
#define        ADG1208_2S8_Selected           GPIO_SetBits(GPIOB,ADG1208_2A2);GPIO_SetBits(GPIOB,ADG1208_2A1);GPIO_SetBits(GPIOB,ADG1208_2A0);//A2=1;A1=1;A0=1


extern uint8_t ADG1208_1Channel;
extern uint8_t ADG1208_2Channel;

extern uint8_t ADG1208_DATA[3];


void ADG1208_GPIO_Config(void);
void ADG1208_ChannelSelect(void);












#endif

