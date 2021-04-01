#include "header.h"
error divide(complex_num num1,complex_num num2,complex_num * complex_div)
{

   if( num2.real==0 || num2.img==0)
   return ERROR_DIV_BY_ZERO;
   
    float a = num1.real*num2.real + num1.img*num2.img;
    float b = num1.img*num2.real - num1.real*num2.img;
    float c = num2.real*num2.real + num2.img*num2.img;
    
    complex_div->real=a/c;
    complex_div->img=b/c;

    
    return passed;
}