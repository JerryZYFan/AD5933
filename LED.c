
#include "headfile.h"



void LED_GPIO_Config(void)	
{
  GPIO_InitTypeDef GPIO_InitStructure;
  RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB, ENABLE); // ʹ��PC�˿�ʱ��  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8|GPIO_Pin_9;	//ѡ���Ӧ������
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;       
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOB, &GPIO_InitStructure);  //��ʼ��PC�˿�
  GPIO_SetBits(GPIOC, GPIO_Pin_8|GPIO_Pin_9 );	 // �ر�����LED
	
	
//	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA, ENABLE); // ʹ��PC�˿�ʱ��  
//  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;	//ѡ���Ӧ������
//	GPIO_Init(GPIOA, &GPIO_InitStructure);  //��ʼ��PC�˿�
}

void Delay(__IO u32 nCount)
{
  for(; nCount != 0; nCount--);
} 
