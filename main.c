
#include "headfile.h"



int  main(void)
{
//	 char *USART_Test="123456789";

	 SysTick_Init();
	 ADG1208_GPIO_Config();
	 LED_GPIO_Config();
	 KEY_Init();
 	 OLED_Init();
   Usart1_Init();
	 Usart2_Init();
	
   Delay_ms(100);
//	
	
	while(1)
	{
//		ADG1208_ChannelSelect();
//		Oled_Page_Display();
//		Usart_SendString(USART1,USART_Test);
//		Delay_ms(100);
//		Usart_SendString(USART2,USART_Test);
//		Delay_ms(500);

	}
}







