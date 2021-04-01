#include"header.h"
int main()
{
 complex_num num1,num2,ans;
 num1.real=4;
 num1.img=2;
 num2.real=5;
 num2.img=2.5;
 error  ans_sum=sum(num1,num2,&ans);
    if(ans_sum== ERROR_DIV_BY_ZERO)
 
     printf("division by zero error");
 
    else if (ans_sum == ERROR_THERE)
    printf("null value found");
    else
    printf("SUCCESS");


  error  ans_diff=diff(num1,num2,&ans);
    if(ans_diff== ERROR_DIV_BY_ZERO)
 
     printf("division by zero error");
 
    else if (ans_diff == ERROR_THERE)
    printf("null value found");
    else
    printf("SUCCESS");

  error  ans_div=divide(num1,num2,&ans);
     if(ans_div== ERROR_DIV_BY_ZERO)
 
     printf("division by zero error");
 
      else if (ans_div == ERROR_THERE)
      printf("null value found");
      else
      printf("SUCCESS");



  error  ans_multiply=multiply(num1,num2,&ans);
       if(ans_multiply== ERROR_DIV_BY_ZERO)
 
       printf("division by zero error");
 
       else if (ans_multiply == ERROR_THERE)
       printf("null value found");
        else
        printf("SUCCESS");
 

return 0;



}