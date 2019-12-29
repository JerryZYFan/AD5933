
#include "headfile.h"



void LED_GPIO_Config(void)	
{
  GPIO_InitTypeDef GPIO_InitStructure;
  RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB, ENABLE); // 使能PC端口时钟  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8|GPIO_Pin_9;	//选择对应的引脚
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;       
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOB, &GPIO_InitStructure);  //初始化PC端口
  GPIO_SetBits(GPIOC, GPIO_Pin_8|GPIO_Pin_9 );	 // 关闭所有LED
	
	
//	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA, ENABLE); // 使能PC端口时钟  
//  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;	//选择对应的引脚
//	GPIO_Init(GPIOA, &GPIO_InitStructure);  //初始化PC端口
}

void Delay(__IO u32 nCount)
{
  for(; nCount != 0; nCount--);
} 
