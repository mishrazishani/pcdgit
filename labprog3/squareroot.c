/* to find the square root of a number*/
#include<stdio.h>
#include<math.h>
int main()
{
float n,r1,r2,error;
printf("enter the number\n");
scanf("%f",&n);
r1=1;
r2=n/r1;
error=0.0001;
while(fabs(r1-r2)>error)
 {
  r1=(r1+r2)/2;
  r2=n/r1;
 }
printf("square root of the number is %f",r1);
return 0;
}
