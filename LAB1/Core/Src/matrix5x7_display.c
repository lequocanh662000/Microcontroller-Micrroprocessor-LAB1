/*
 * matrix5x7_display.c
 *
 *  Created on: Sep 19, 2021
 *      Author: Dell
 */

#include "maxtrix5x7_display.h"
#include "main.h"

#define NUMBER_OF_MATRIX5x7 	1

static int 	matrix5x7_buffer[NUMBER_OF_MATRIX5x7]; // number of matrix led buffer : quet column
static uint8_t rowMatrix5x7Conversion[] = {0xfd, 0xfd, 0xfb, 0xf7, 0xef, 0xdf, 0xdf, 0xdf, 0xef, 0xf7, 0xfb, 0xfd};

static uint8_t column_buffer[] = {0x01, 0x2, 0x04, 0x08, 0x10};
static uint8_t row_buffer[]    = {0xff, 0xff, 0xff, 0xff, 0xff};


void display_matrix5x7_all(){   // for ex6
	for(int i=0; i<5; i++){
		GPIOB->ODR = row_buffer[i];
		GPIOA->ODR = column_buffer[i];
		HAL_Delay(1000); // if it is fast enough (delay 1ms), fps > 24, people can see it like as the picture showed in requirement
	}
}

void clearAllClock(void){  // for ex7
	HAL_GPIO_WritePin(GPIOB, ROW1_Pin|ROW2_Pin|ROW3_Pin|ROW4_Pin
			                            |ROW5_Pin|ROW6_Pin|ROW7_Pin|GPIO_PIN_7, GPIO_PIN_SET);

	HAL_GPIO_WritePin(GPIOA, COL1_Pin|COL2_Pin|COL3_Pin|COL4_Pin
		                            |COL5_Pin, GPIO_PIN_RESET);
}

void Matrix5x7_led_driver(void){
	uint8_t temp = rowMatrix5x7Conversion[matrix5x7_buffer[0]];
	int checknum = matrix5x7_buffer[0];
	if((checknum == 8) | (checknum == 9) | (checknum == 10))row_buffer[0] = (row_buffer[0] & temp);
	else if((checknum == 7) | (checknum == 11))row_buffer[1] = (row_buffer[1] & temp);
	else if((checknum == 0) | (checknum == 6))row_buffer[2] = (row_buffer[2] & temp);
	else if((checknum == 1) | (checknum == 5))row_buffer[3] = (row_buffer[3] & temp);
	else row_buffer[4] = (row_buffer[4] & temp);
}

void setNumberOnClock(int number){ // for ex8
	matrix5x7_buffer[0] = number;
	Matrix5x7_led_driver();
}
//////////////////////////////////////////////////////////////////////
//void display_matrix5x7(int row, int col){
//	HAL_GPIO_WritePin(GPIOB, ROW1_Pin|ROW2_Pin|ROW3_Pin|ROW4_Pin
//		                            |ROW5_Pin|ROW6_Pin|ROW7_Pin|GPIO_PIN_7, GPIO_PIN_SET);
//
//	HAL_GPIO_WritePin(GPIOA, COL1_Pin|COL2_Pin|COL3_Pin|COL4_Pin
//	                            |COL5_Pin, GPIO_PIN_RESET);
//
//	if(col == 1){
//		HAL_GPIO_WritePin(GPIOA, COL1_Pin, SET);
//	}else if(col == 2){
//		HAL_GPIO_WritePin(GPIOA, COL2_Pin, SET);
//	}else if(col == 3){
//		HAL_GPIO_WritePin(GPIOA, COL3_Pin, SET);
//	}else if(col == 4){
//		HAL_GPIO_WritePin(GPIOA, COL4_Pin, SET);
//	}else {
//		HAL_GPIO_WritePin(GPIOA, COL5_Pin, SET);
//	}
//
//	if(row == 1){
//		HAL_GPIO_WritePin(GPIOB, ROW1_Pin, RESET);
//	}else if(row == 2){
//		HAL_GPIO_WritePin(GPIOB, ROW2_Pin, RESET);
//	}else if(row == 3){
//		HAL_GPIO_WritePin(GPIOB, ROW3_Pin, RESET);
//	}else if(row == 4){
//		HAL_GPIO_WritePin(GPIOB, ROW4_Pin, RESET);
//	}else if(row == 5){
//		HAL_GPIO_WritePin(GPIOB, ROW5_Pin, RESET);
//	}else if(row == 6){
//		HAL_GPIO_WritePin(GPIOA, ROW6_Pin, RESET);
//	}else {
//		HAL_GPIO_WritePin(GPIOA, ROW7_Pin, RESET);
//	}
//}
//
//void display_clock12(int hour){
//	if(hour == 0){
//		display_matrix5x7(1, 3);
//	}else if(hour == 1){
//		display_matrix5x7(1, 4);
//	}else if(hour == 2){
//		display_matrix5x7(2, 5);
//	}else if(hour == 3){
//		display_matrix5x7(3, 5);
//	}else if(hour == 4){
//		display_matrix5x7(4, 5);
//	}else if(hour == 5){
//		display_matrix5x7(5, 4);
//	}else if(hour == 6){
//		display_matrix5x7(5, 3);
//	}else if(hour == 7){
//		display_matrix5x7(5, 2);
//	}else if(hour == 8){
//		display_matrix5x7(4, 1);
//	}else if(hour == 9){
//		display_matrix5x7(3, 1);
//	}else if(hour == 10){
//		display_matrix5x7(2, 1);
//	}else if(hour == 11){
//		display_matrix5x7(1, 2);
//	}
//}


