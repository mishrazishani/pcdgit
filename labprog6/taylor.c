#include<math.h>
#include<stdio.h>

float mysinx(float x)
{
int i,n;
float degree,term,sum;
x=degree*(3.142/180.0);
n=1;
term=x;
sum=0;
for(i=0;i<=n;i+=2)
{
term=-term*x*x/(i*(i-1));
sum=sum+term;
n=n+1;

}

}
int main()
{
int b,n;
float degree,sum, x;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the degree\n");
scanf("%f",&degree);
b=mysinx(x);
printf("sum of the sine series sin(%f)=%f\n",degree,sum);

return 0;
}

