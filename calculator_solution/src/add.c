#include "header.h"
error sum(complex_num num1,complex_num num2,complex_num * complex_sum)
{
if(complex_sum== NULL)
return ERROR_THERE;

    complex_sum->real=num1.real+num2.real;
    complex_sum->img=num1.img+num2.img;
    return passed;
}