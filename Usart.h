#ifndef __USART_C_H__
#define __USART_C_H__


#include "stm32f10x.h"
#include "headfile.h"




//引脚定义
/*******************************************************/
#define DEBUG_USART                             USART1
#define DEBUG_USART_CLK                         RCC_APB2Periph_USART1
#define DEBUG_USART_BAUDRATE                    115200  //串口波特率

#define DEBUG_USART_RX_GPIO_PORT                GPIOA
#define DEBUG_USART_RX_GPIO_CLK                 RCC_APB2Periph_GPIOA
#define DEBUG_USART_RX_PIN                      GPIO_Pin_10

#define DEBUG_USART_TX_GPIO_PORT                GPIOA
#define DEBUG_USART_TX_GPIO_CLK                 RCC_APB2Periph_GPIOA
#define DEBUG_USART_TX_PIN                      GPIO_Pin_9

//#define DEBUG_USART_IRQHandler                  USART1_IRQHandler
#define DEBUG_USART_IRQ                 				USART1_IRQn
/************************************************************/
#define USART2_BAUDRATE                          115200  //串口波特率

void Usart1_Init(void);
void Usart2_Init(void);
void Usart_SendByte( USART_TypeDef * pUSARTx, uint8_t ch);
void Usart_SendString( USART_TypeDef * pUSARTx, char *str);

void Usart_Send2Byte( USART_TypeDef * pUSARTx, int16_t ch);
void Usart_Send4Byte( USART_TypeDef * pUSARTx, int32_t ch);











#endif 

