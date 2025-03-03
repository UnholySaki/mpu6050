#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

/*======================| GPIO |======================*/
#define BUILTIN_LED_PORT GPIOC
#define BUILTIN_LED_PIN GPIO_PIN_13

/*======================| I2C |======================*/
#define I2C1_SCL_PORT GPIOB
#define I2C1_SCL_PIN GPIO_PIN_6
#define I2C1_SDA_PORT GPIOB
#define I2C1_SDA_PIN GPIO_PIN_7

#define I2C1_GPIO_CLK_ENABLE() __HAL_RCC_GPIOB_CLK_ENABLE()
#define I2C1_GPIO_CLK_DISABLE() __HAL_RCC_GPIOB_CLK_DISABLE()
/*======================| UART |======================*/

#define USART1_INSTANCE USART1
#define USART1_BUADRATE 115200

#define USART1_RX_PORT GPIOA
#define USART1_RX_PIN GPIO_PIN_9
#define USART1_TX_PORT GPIOA
#define USART1_TX_PIN GPIO_PIN_10

#define USART1_IRQn USART1_IRQn

#define USART1_CLK_ENABLE()  __HAL_RCC_USART1_CLK_ENABLE()
#define USART1_CLK_DISABLE() __HAL_RCC_USART1_CLK_DISABLE()
#define USART1_GPIO_CLK_ENABLE() __HAL_RCC_GPIOA_CLK_ENABLE()
#define USART1_GPIO_CLK_DISABLE() __HAL_RCC_GPIOA_CLK_DISABLE()

#endif // BOARD_CONFIG_H