#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/**
 * @file header.h
 * @author ayushi (ayushiag882@gmail.com)
 * @brief  complex_calculator_program
 * @version 0.1
 * @date 2021-04-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __HEADER_H__
#define __HEADER_H__
typedef struct complex_num
{
    /* data */
    float real,img;
}complex_num;
typedef enum error
{
    ERROR_DIV_BY_ZERO = -2, 
    ERROR_THERE = -1,   
    passed = 0             
}error;

/**
 * @brief computing the sum of complex number
 * 
 * 
 */

 error sum(complex_num num1,complex_num num2,complex_num* complex_sum);

/**
 * @brief Subtraction of two complex numbers.
 * 
 * @param num1 
 * @param num2 
 * @return error_t 
 */
error diff(complex_num num1,complex_num num2,complex_num* complex_diff);

/**
 * @brief Multiplication of two complex numbers.
 * 
 * @param num1 
 * @param num2 
 * @return error_t 
 */
error multiply(complex_num num1,complex_num num2,complex_num* complex_mul);

/**
 * @brief Division of two complex numbers.
 * 
 * @param num1 
 * @param num2 
 * @return error_t 
 */
error divide(complex_num num1,complex_num num2,complex_num* complex_div);


#endif

