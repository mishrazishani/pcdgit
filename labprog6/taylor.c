#include<math.h>
#include<stdio.h>
float mysinx(float degree)
{
int i;
float x,term,sum;
x=(degree*(3.142/180.0));
term=x;
sum=term;
for(i=3;fabs(term)>0.00001;i+=2)
    {
    term=-term*x*x/(i*(i-1));
    sum=sum+term;
    }
return sum;
}
int main()
{
float degree,b;
printf("enter the degree\n");
scanf("%f",&degree);
b=mysinx(degree);
printf("sum of the sine series sin(%f)=%f\n",degree,b);

return 0;
}
