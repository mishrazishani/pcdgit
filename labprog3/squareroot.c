/*to find the sqrt of a number*/
#include<stdio.h>
#include<math.h>
float squareroot(float x)
{
    float r1,r2,error;
    r1=1;
    r2=x/r1;
    error=0.0001;
while(fabs(r1-r2)>error)
  {
  r1=(r1+r2)/2;
  r2=x/r1;
  }
return r1;
}
int main()
{
float x,b;
printf("enter the number\n");
scanf("%f",&x);
b=sqrt(x);
printf(" %f is the sqrt of the number\n",b);
return 0;
}
