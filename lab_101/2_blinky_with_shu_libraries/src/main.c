/*
 * main.c
 *
 * this is the main blinky application (this code is dependent on the
 * extra shu libraries such as the pinmappings list and the clock configuration
 * library)
 *
 * author:    Dr. Alex Shenfield
 * date:      01/09/2017
 * purpose:   55-604481 embedded computer networks : lab 101
 */

// include the hal drivers
#include "stm32f7xx_hal.h"

// include the shu bsp libraries for the stm32f7 discovery board
#include "pinmappings.h"
#include "clock.h"
#include "gpio.h"
#include "random_numbers.h"

// map the led to GPIO PI1 (again, this is the inbuilt led)
gpio_pin_t LED1 = {PI_2, GPIOI, GPIO_PIN_2};
gpio_pin_t LED2 = {PA_15, GPIOA, GPIO_PIN_15};
gpio_pin_t LED3 = {PA_8, GPIOA, GPIO_PIN_8};
gpio_pin_t LED4 = {PB_15, GPIOB, GPIO_PIN_15};
gpio_pin_t LED5 = {PB_14, GPIOB, GPIO_PIN_14};
gpio_pin_t LED6 = {PI_1, GPIOI, GPIO_PIN_1};
gpio_pin_t LED7 = {PB_9, GPIOB, GPIO_PIN_9};
gpio_pin_t pb1 = {PI_3, GPIOI, GPIO_PIN_3};

// this is the main method
int main()
{
  // we need to initialise the hal library and set up the SystemCoreClock 
  // properly
  HAL_Init();
  init_sysclk_216MHz();
  init_random();
	
  // initialise the gpio pins
  init_gpio(LED1, OUTPUT);
	init_gpio(LED2, OUTPUT);
	init_gpio(LED3, OUTPUT);
	init_gpio(LED4, OUTPUT);
	init_gpio(LED5, OUTPUT);
	init_gpio(LED6, OUTPUT);
	init_gpio(LED7, OUTPUT);
	init_gpio(pb1, INPUT);
	
	int ledState = HIGH;         
  int buttonState;             
  int lastButtonState = LOW;
  
	write_gpio(LED1, HIGH);
	unsigned long lastDebounceTime = 0;
	unsigned long debounceDelay = 50;
	
  // loop forever ...
  while(1)
  {
		int reading = digitalRead(pb1);
		
		if(read_gpio(pb1))
		{
			toggle_gpio(LED1);
			toggle_gpio(LED2);
		}
		
		lastDebounceTime = millis();
		
		
		
		
		
		
		
		
		
		//dice roll
//		uint32_t rnd = (get_random_int() % 6) + 1;
//		
//		if ( rnd == 1)
//		{
//			toggle_gpio(LED4);
//		}
//		else if ( rnd == 2)
//		{
//			toggle_gpio(LED1);
//			toggle_gpio(LED7);
//		}
//		else if ( rnd == 3)
//		{
//			toggle_gpio(LED1);
//			toggle_gpio(LED4);
//			toggle_gpio(LED7);
//		}
//		else if ( rnd == 4)
//		{
//			toggle_gpio(LED1);
//			toggle_gpio(LED3);
//			toggle_gpio(LED5);
//			toggle_gpio(LED7);
//		}
//		else if ( rnd == 5)
//		{
//			toggle_gpio(LED1);
//			toggle_gpio(LED3);
//			toggle_gpio(LED4);
//			toggle_gpio(LED5);
//			toggle_gpio(LED7);
//		}
//		else if ( rnd == 6)
//		{
//			toggle_gpio(LED1);
//			toggle_gpio(LED2);
//			toggle_gpio(LED3);
//			toggle_gpio(LED5);
//			toggle_gpio(LED6);
//			toggle_gpio(LED7);
//		}
//		HAL_Delay(2000);
//		write_gpio(LED1, LOW);
//		write_gpio(LED2,LOW);
//		write_gpio(LED3,LOW);
//		write_gpio(LED4,LOW);
//		write_gpio(LED5,LOW);
//		write_gpio(LED6,LOW);
//		write_gpio(LED7,LOW);

		
		
		
		
		
		
		//traffic lights
//    // toggle the led on the gpio pin
//    toggle_gpio(Red1);
//		toggle_gpio(Green2);
//    
//    // wait for 1 second
//    HAL_Delay(5000);
//		
//		toggle_gpio(Orange2);
//		toggle_gpio(Green2);
//		
//		HAL_Delay(2000); 
//		
//		toggle_gpio(Orange1);
//		
//		HAL_Delay(2000);
//		
//		toggle_gpio(Red1);
//		toggle_gpio(Orange1);
//		toggle_gpio(Green1);
//		toggle_gpio(Orange2);
//		toggle_gpio(Red2);
//		
//		HAL_Delay(5000);
//		
//		toggle_gpio(Orange1);
//		toggle_gpio(Green1);
//		
//		HAL_Delay(2000);
//		
//		toggle_gpio(Orange2);
//		
//		HAL_Delay(2000);

//		toggle_gpio(Orange1);
//		toggle_gpio(Red2);
//		toggle_gpio(Orange2);
  }
}
