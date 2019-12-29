#ifndef __LED_H__
#define __LED_H__

#include "stm32f10x.h"


/* 直接操作寄存器的方法控制IO */
#define	digitalHi(p,i)			 {p->BSRRL=i;}		//设置为高电平
#define digitalLo(p,i)			 {p->BSRRH=i;}		//输出低电平
#define digitalToggle(p,i)	 {p->ODR ^=i;}		//输出反转状态


//#define LED_ON()	      GPIO_SetBits(GPIOC,GPIO_Pin_13)
//#define LED_OFF()	      GPIO_ResetBits(GPIOC,GPIO_Pin_13)


#define LED1_ON()	      PBout(8)=1
#define LED1_OFF()	    PBout(8)=0
#define LED1_TURN()    	digitalToggle(GPIOB,GPIO_Pin_8)

#define LED2_ON()	      PBout(9)=1
#define LED2_OFF()	    PBout(9)=0
#define LED2_TURN()    	digitalToggle(GPIOB,GPIO_Pin_9)


void LED_GPIO_Config(void);
void Delay(__IO u32 nCount); 



















#endif 
