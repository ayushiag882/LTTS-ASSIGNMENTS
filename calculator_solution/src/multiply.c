#include "header.h"
error multiply(complex_num num1,complex_num num2,complex_num * complex_mul)
{
if(complex_mul== NULL)
return ERROR_THERE;
  complex_mul->real = num1.real*num2.real - num1.img*num2.img;
    complex_mul->img = num1.img*num2.real + num1.real*num2.img;
    return passed;
}