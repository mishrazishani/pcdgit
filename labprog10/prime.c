/*to generate prime numbers in a given range of numbers*/
#include<stdio.h>
int isprime(int n)
{
int i,flag=0;
for(i=2;i<=n/2;i++)
	{
	if(n%i==0)
		{
		flag=1;
		}
	break;
	}
return flag;
}
int main()
{
int i,j,n1,n2,flag;
printf("enter the range\n");
scanf("%d%d",&n1,&n2);
printf("prine numbers between %d and %d are\n",n1,n2);
for(j=n1+1;j<n2;j++)
{
flag=isprime(j);
if(!flag)
	{
	printf("%d\n",j);
	}
}
return 0;
}

