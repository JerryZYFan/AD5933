
#include "headfile.h"



uint8_t ADG1208_1Channel=1;
uint8_t ADG1208_2Channel=1;


uint8_t ADG1208_DATA[3]={0,0,1};




void ADG1208_GPIO_Config(void)	
{
  GPIO_InitTypeDef GPIO_InitStructure;
	
  RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB, ENABLE); // 使能PC端口时钟  
  GPIO_InitStructure.GPIO_Pin =ADG1208_1A0|ADG1208_1A1|ADG1208_1A2| ADG1208_2A0|ADG1208_2A1|ADG1208_2A2;	//选择对应的引脚
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;       
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOB, &GPIO_InitStructure);  //初始化PC端口
  GPIO_SetBits(GPIOB,  ADG1208_1A0|ADG1208_1A1|ADG1208_1A2| ADG1208_2A0|ADG1208_2A1|ADG1208_2A2 );	
}


void ADG1208_ChannelSelect(void)
{
	 ADG1208_1Channel=ADG1208_DATA[0];
	 ADG1208_2Channel=ADG1208_DATA[1];

	if(ADG1208_1Channel>ADG1208_ChannelMax)
		ADG1208_1Channel=ADG1208_ChannelMin;
	if(ADG1208_1Channel<ADG1208_ChannelMin)
		ADG1208_1Channel=ADG1208_ChannelMax;
	
	switch(ADG1208_1Channel) 
	{
		case 1: ADG1208_1S1_Selected;break;
		case 2: ADG1208_1S2_Selected;break;
		case 3: ADG1208_1S3_Selected;break;
		case 4: ADG1208_1S4_Selected;break;
		case 5: ADG1208_1S5_Selected;break;
		case 6: ADG1208_1S6_Selected;break;
		case 7: ADG1208_1S7_Selected;break;
		case 8: ADG1208_1S8_Selected;break;
		default:break;
	}
	
	if(ADG1208_2Channel>ADG1208_ChannelMax)
		ADG1208_2Channel=ADG1208_ChannelMin;
	if(ADG1208_2Channel<ADG1208_ChannelMin)
		ADG1208_2Channel=ADG1208_ChannelMax;
	
	switch(ADG1208_2Channel) 
	{
		case 1: ADG1208_2S1_Selected;break;
		case 2: ADG1208_2S2_Selected;break;
		case 3: ADG1208_2S3_Selected;break;
		case 4: ADG1208_2S4_Selected;break;
		case 5: ADG1208_2S5_Selected;break;
		case 6: ADG1208_2S6_Selected;break;
		case 7: ADG1208_2S7_Selected;break;
		case 8: ADG1208_2S8_Selected;break;
		default:break;	
	}
	
	printf("ADG1208_1选择通道为S%d！！！\n",ADG1208_1Channel);
	printf("ADG1208_2选择通道为S%d！！！\n",ADG1208_2Channel);
}
