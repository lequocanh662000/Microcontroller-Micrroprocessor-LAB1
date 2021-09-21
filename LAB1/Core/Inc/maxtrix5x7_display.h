/*
 * maxtrix5x7_display.h
 *
 *  Created on: Sep 19, 2021
 *      Author: Dell
 */

#ifndef INC_MAXTRIX5X7_DISPLAY_H_
#define INC_MAXTRIX5X7_DISPLAY_H_

#define COL1_Pin 			GPIO_PIN_0
#define COL1_Port	 		GPIOA
#define COL2_Pin 			GPIO_PIN_1
#define COL2_Port	 		GPIOA
#define COL3_Pin 			GPIO_PIN_2
#define COL3_Port	 		GPIOA
#define COL4_Pin 			GPIO_PIN_3
#define COL4_Port	 		GPIOA
#define COL5_Pin 			GPIO_PIN_4
#define COL5_Port	 		GPIOA

#define ROW1_Pin 			GPIO_PIN_0
#define ROW1_Port 			GPIOB
#define ROW2_Pin 			GPIO_PIN_1
#define ROW2_Port 			GPIOB
#define ROW3_Pin 			GPIO_PIN_2
#define ROW3_Port 			GPIOB
#define ROW4_Pin 			GPIO_PIN_3
#define ROW4_Port 			GPIOB
#define ROW5_Pin 			GPIO_PIN_4
#define ROW5_Port 			GPIOB
#define ROW6_Pin 			GPIO_PIN_5
#define ROW6_Port 			GPIOB
#define ROW7_Pin 			GPIO_PIN_6
#define ROW7_Port 			GPIOB

void display_matrix5x7_all();
void clearAllClock(void);
void display_matrix5x7_number(int number);
void Matrix5x7_led_driver();
void setNumberOnClock(int number);

//void display_matrix5x7(int row, int col);
//void display_clock12(int hour);



#endif /* INC_MAXTRIX5X7_DISPLAY_H_ */
