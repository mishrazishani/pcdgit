#include<stdio.h>
void mult(int m, int n, int a[m][n],int p, int q, int b[p][q], int i, int j, int c[i][j])
{
int k;
for(i=0;i<m;i++)
	{
	for(j=0;j<q;j++)
		
		c[i][j]=0;	
		for(k=0;k<n;k++)
		{	
		c[i][j]+=( a[i][k]*b[k][j]);
        	}
		
	}
}
int main()
{
int  m,n,p,q,i,j,k,a[10][10],b[10][10],c[10][10];
printf("enter the order of the matrix A\n");
scanf("%d%d",&m,&n);
printf("enter the order of the matrix B\n");
scanf("%d%d",&p,&q);
if(n!=p)
	{
	printf("matrix multiplication is not possible\n");
	}
printf("enter the elements into A\n");
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
printf("enter the elements into matrix B\n");
for(i=0;i<p;i++)
	{
	for(j=0;j<n;j++)
		{
		scanf("%d",&b[i][j]);
		}
	}
printf("the elements of matrix A are\n");
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("%3d",a[i][j]);
		}
	printf("\n");
	}
printf(" the elements of matrix B are\n");
for(i=0;i<p;i++)
	{
	for(j=0;j<q;j++)
		{
		printf("%3d",b[i][j]);
		}
	printf("\n");
	}
mult(m,n,a,p,q,b,i,j,c);
printf("product of the matrices are\n");
for(i=0;i<m;i++)
	{
	for(j=0;j<q;j++)
		{
		printf("%3d",c[i][j]);
		}
	printf("\n");
	}
return 0;
}
