#include "headfile.h" 


void GPIO_KEY_Config(void);
void NVIC_KEY_Config(void);
void EXTI_KEY_Config(void);



void KEY_Init(void)
{
	 GPIO_KEY_Config();
	 EXTI_KEY_Config();
	 NVIC_KEY_Config();
}


void GPIO_KEY_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	//初始化KEY1-->PA0上拉输入
// 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);//使能PA时钟
//	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_4;//PA4
//	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; //设置成上拉输入
// 	GPIO_Init(GPIOA, &GPIO_InitStructure);//初始化PA4
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);//使能PB时钟
	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_0|GPIO_Pin_1;//PB0、PB1
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; //设置成上拉输入
 	GPIO_Init(GPIOB, &GPIO_InitStructure);//初始化PB0、PB1
	
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);//使能PA时钟
//	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_0;//PA0
//	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD; //设置成上拉输入
// 	GPIO_Init(GPIOA, &GPIO_InitStructure);//初始化PA0
	
	
}

void NVIC_KEY_Config(void)
{
	NVIC_InitTypeDef NVIC_InitStructure;
	
//	NVIC_InitStructure.NVIC_IRQChannel = EXTI4_IRQn;			//使能按键PA4所在的外部中断通道
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 2;	  //抢占优先级2
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;					//子优先级3
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;							//使能外部中断通道
//	NVIC_Init(&NVIC_InitStructure); 
	
	NVIC_InitStructure.NVIC_IRQChannel = EXTI0_IRQn;
	NVIC_Init(&NVIC_InitStructure); 
	
	NVIC_InitStructure.NVIC_IRQChannel = EXTI1_IRQn;
	NVIC_Init(&NVIC_InitStructure); 
	
//	NVIC_InitStructure.NVIC_IRQChannel = EXTI3_IRQn;
//	NVIC_Init(&NVIC_InitStructure); 

}

void EXTI_KEY_Config(void)
{
	
	EXTI_InitTypeDef EXTI_InitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);	//使能复用功能时钟
	
//	GPIO_EXTILineConfig(GPIO_PortSourceGPIOA,GPIO_PinSource4);//PA4
//  /* 选择 EXTI 中断源 */
//  EXTI_InitStructure.EXTI_Line = EXTI_Line4;
//  /* 中断模式 */
//  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
//  /* 下降沿触发 */
//  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;  
//  /* 使能中断/事件线 */
//  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
//	
//  EXTI_Init(&EXTI_InitStructure);
	
	
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOB,GPIO_PinSource0);//PB0
	/* 选择 EXTI 中断源 */
  EXTI_InitStructure.EXTI_Line = EXTI_Line0;
  /* 中断模式 */
  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
  /* 下降沿触发 */
  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;  
  /* 使能中断/事件线 */
  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	
  EXTI_Init(&EXTI_InitStructure);
	
	
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOB,GPIO_PinSource1);//PB1
	/* 选择 EXTI 中断源 */
  EXTI_InitStructure.EXTI_Line = EXTI_Line1;
  /* 中断模式 */
  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
  /* 下降沿触发 */
  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;  
  /* 使能中断/事件线 */
  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	
  EXTI_Init(&EXTI_InitStructure);
	
	
//	GPIO_EXTILineConfig(GPIO_PortSourceGPIOA,GPIO_PinSource0);//PB1
//	/* 选择 EXTI 中断源 */
//  EXTI_InitStructure.EXTI_Line = EXTI_Line3;
//  /* 中断模式 */
//  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
//  /* 下降沿触发 */
//  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Rising;  
//  /* 使能中断/事件线 */
//  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
//	
//  EXTI_Init(&EXTI_InitStructure);
	
}
