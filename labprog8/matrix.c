#include<stdio.h>
int mult(int m, int n, int a[m][n],int p, int q, int b[p][q], int c[m][q])
{
int i,j, k;
for(i=0;i<m;i++)
	{
	for(j=0;j<q;j++)
		{
		c[i][j]=0;	
		
	for(k=0;k<p;k++)
		{	
		c[i][j]= c[i][j] +( a[i][k]*b[k][j]);
        	}
		}
	}
return c[i][j];
}
int main()
{
int temp,m, n, p,q, i,j,k;
int a[10][10],b[10][10],c[10][10]; 
printf("enter the order of matrix A\n");
scanf("%d%d", &m,&n);
printf("enter the order of matrix B\n");
scanf("%d%d", &p,&q);
if(n!=p)
	{
	printf("matrix multiplication not possible\n");
	}
else
{
printf("enter the elements of matrix A\n");
}
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}

printf("enter the elements of matrix B\n");
for(i=0;i<p;i++)
	{
	for(j=0;j<q;j++)
		{
		scanf("%d",&b[i][j]);
		}
	}
printf("the elements of matrix A are\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\n",a[i][j]);
}
}
printf("the elemnts of matrix B are\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\n",b[i][j]);
}
}
//multiplication
temp=mult(m,n,a,p,q,b,c);
printf("the resultant matrix C is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\n",c[i][j]);
}
printf("\n");
}
return 0;
}
	

