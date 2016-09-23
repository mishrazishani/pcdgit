#include<stdio.h>
void bubblesort(int a[],int n)
{
int temp,i,j,flag=0;

for(i=0;i<n;i++)
{
	for(j=0, flag=0;j<(n-1-i);j++)
		{
		if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			flag=1;
			}
		}
	if (flag==0)
		{
		break;
		}
}
}
int main()
{
int n,a[100],i,temp,j;
printf("enter the no of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("a[%d]\n",i);
scanf("%d",&a[i]);
}
bubblesort(a,n);
printf("sorted array is\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
