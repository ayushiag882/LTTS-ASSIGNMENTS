#include "header.h"
error diff(complex_num num1,complex_num num2,complex_num * complex_diff)
{
if(complex_diff== NULL)
return ERROR_THERE;

    complex_diff->real=num1.real-num2.real;
    complex_diff->img=num1.img -num2.img;
    return passed;
}