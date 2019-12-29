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
	//��ʼ��KEY1-->PA0��������
// 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);//ʹ��PAʱ��
//	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_4;//PA4
//	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; //���ó���������
// 	GPIO_Init(GPIOA, &GPIO_InitStructure);//��ʼ��PA4
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);//ʹ��PBʱ��
	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_0|GPIO_Pin_1;//PB0��PB1
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU; //���ó���������
 	GPIO_Init(GPIOB, &GPIO_InitStructure);//��ʼ��PB0��PB1
	
//	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);//ʹ��PAʱ��
//	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_0;//PA0
//	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD; //���ó���������
// 	GPIO_Init(GPIOA, &GPIO_InitStructure);//��ʼ��PA0
	
	
}

void NVIC_KEY_Config(void)
{
	NVIC_InitTypeDef NVIC_InitStructure;
	
//	NVIC_InitStructure.NVIC_IRQChannel = EXTI4_IRQn;			//ʹ�ܰ���PA4���ڵ��ⲿ�ж�ͨ��
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 2;	  //��ռ���ȼ�2
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;					//�����ȼ�3
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;							//ʹ���ⲿ�ж�ͨ��
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
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);	//ʹ�ܸ��ù���ʱ��
	
//	GPIO_EXTILineConfig(GPIO_PortSourceGPIOA,GPIO_PinSource4);//PA4
//  /* ѡ�� EXTI �ж�Դ */
//  EXTI_InitStructure.EXTI_Line = EXTI_Line4;
//  /* �ж�ģʽ */
//  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
//  /* �½��ش��� */
//  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;  
//  /* ʹ���ж�/�¼��� */
//  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
//	
//  EXTI_Init(&EXTI_InitStructure);
	
	
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOB,GPIO_PinSource0);//PB0
	/* ѡ�� EXTI �ж�Դ */
  EXTI_InitStructure.EXTI_Line = EXTI_Line0;
  /* �ж�ģʽ */
  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
  /* �½��ش��� */
  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;  
  /* ʹ���ж�/�¼��� */
  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	
  EXTI_Init(&EXTI_InitStructure);
	
	
	GPIO_EXTILineConfig(GPIO_PortSourceGPIOB,GPIO_PinSource1);//PB1
	/* ѡ�� EXTI �ж�Դ */
  EXTI_InitStructure.EXTI_Line = EXTI_Line1;
  /* �ж�ģʽ */
  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
  /* �½��ش��� */
  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Falling;  
  /* ʹ���ж�/�¼��� */
  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	
  EXTI_Init(&EXTI_InitStructure);
	
	
//	GPIO_EXTILineConfig(GPIO_PortSourceGPIOA,GPIO_PinSource0);//PB1
//	/* ѡ�� EXTI �ж�Դ */
//  EXTI_InitStructure.EXTI_Line = EXTI_Line3;
//  /* �ж�ģʽ */
//  EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
//  /* �½��ش��� */
//  EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Rising;  
//  /* ʹ���ж�/�¼��� */
//  EXTI_InitStructure.EXTI_LineCmd = ENABLE;
//	
//  EXTI_Init(&EXTI_InitStructure);
	
}
