/*to compute the polynomial f(x) using Horner's method*/
#include<stdio.h>
int main()
{
float coeff[10],x,fx=0;
int i;
printf("enter the coefficients\n");
for(i=0;i<=4;i++)
  {
  printf("coeff[%d]=  ",i);
  scanf("%f",&coeff[i]);
  }
printf("enter the value of x\n");
scanf("%f",&x);
for(i=4;i>=0;i--)
fx=fx*x+coeff[i];
printf("f(%f)=%f",x,fx);
return 0;
}


