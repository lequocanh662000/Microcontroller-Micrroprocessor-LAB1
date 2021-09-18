/*
 * led7_display.h
 *
 *  Created on: Sep 18, 2021
 *      Author: Dell
 */

#ifndef INC_LED7_DISPLAY_H_
#define INC_LED7_DISPLAY_H_

#define SEVEN_SEGMENT_1_A 			GPIO_PIN_0
#define SEVEN_SEGMENT_1_A_PORT 		GPIOB
#define SEVEN_SEGMENT_1_B 			GPIO_PIN_1
#define SEVEN_SEGMENT_1_B_PORT 		GPIOB
#define SEVEN_SEGMENT_1_C 			GPIO_PIN_2
#define SEVEN_SEGMENT_1_C_PORT 		GPIOB
#define SEVEN_SEGMENT_1_D 			GPIO_PIN_3
#define SEVEN_SEGMENT_1_D_PORT 		GPIOB
#define SEVEN_SEGMENT_1_E 			GPIO_PIN_4
#define SEVEN_SEGMENT_1_E_PORT 		GPIOB
#define SEVEN_SEGMENT_1_F 			GPIO_PIN_5
#define SEVEN_SEGMENT_1_F_PORT 		GPIOB
#define SEVEN_SEGMENT_1_G 			GPIO_PIN_6
#define SEVEN_SEGMENT_1_G_PORT 		GPIOB
#define SEVEN_SEGMENT_1_H 			GPIO_PIN_7
#define SEVEN_SEGMENT_1_H_PORT 		GPIOB

void update_seven_segment_led_buffer(int number);
void seven_segment_led_driver(void);
void display7SEG(int number);


#endif /* INC_LED7_DISPLAY_H_ */
