/*to compute the polynomial f(x)=(a*x*x)+(b*x)+c*/
#include<stdio.h>
float compute (float a, float b, float c, float x)
{
return (a*x*x)+(b*x)+c;
}
int main()
{
float a,b,c,x,d;
printf("rnter the coefficients\n");
scanf("%f%f%f%f",&a,&b,&c,&x);
d=compute(a,b,c);
printf("d=%f",d);
return 0;
}
