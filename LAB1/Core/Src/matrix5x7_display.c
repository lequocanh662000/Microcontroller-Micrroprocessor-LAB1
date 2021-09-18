/*
 * matrix5x7_display.c
 *
 *  Created on: Sep 19, 2021
 *      Author: Dell
 */

#include "maxtrix5x7_display.h"
#include "main.h"

void display_matrix5x7(int row, int col){
	HAL_GPIO_WritePin(GPIOA, ROW1_Pin|ROW2_Pin|ROW3_Pin|ROW4_Pin
	                            |ROW5_Pin, GPIO_PIN_RESET);

	HAL_GPIO_WritePin(GPIOB, COL1_Pin|COL2_Pin|COL3_Pin|COL4_Pin
	                            |COL5_Pin|COL6_Pin|COL7_Pin|GPIO_PIN_7, GPIO_PIN_SET);

	if(row == 1){
		HAL_GPIO_WritePin(GPIOA, ROW1_Pin, SET);
	}else if(row == 2){
		HAL_GPIO_WritePin(GPIOA, ROW2_Pin, SET);
	}else if(row == 3){
		HAL_GPIO_WritePin(GPIOA, ROW3_Pin, SET);
	}else if(row == 4){
		HAL_GPIO_WritePin(GPIOA, ROW4_Pin, SET);
	}else {
		HAL_GPIO_WritePin(GPIOA, ROW5_Pin, SET);
	}

	if(col == 1){
		HAL_GPIO_WritePin(GPIOB, COL1_Pin, RESET);
	}else if(col == 2){
		HAL_GPIO_WritePin(GPIOB, COL2_Pin, RESET);
	}else if(col == 3){
		HAL_GPIO_WritePin(GPIOB, COL3_Pin, RESET);
	}else if(col == 4){
		HAL_GPIO_WritePin(GPIOB, COL4_Pin, RESET);
	}else if(col == 5){
		HAL_GPIO_WritePin(GPIOB, COL5_Pin, RESET);
	}else if(col == 6){
		HAL_GPIO_WritePin(GPIOA, COL6_Pin, RESET);
	}else {
		HAL_GPIO_WritePin(GPIOA, COL7_Pin, RESET);
	}
}
