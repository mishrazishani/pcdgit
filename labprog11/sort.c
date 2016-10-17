#include<stdio.h>
#include<string.h>
void inputstrings(int m, int n, char s[m][n])
{
    int i;
for( i=0;i<m;i++)
	{
	printf("enter next string\n");
	scanf("%s",s[i]);
	}
}
void outputstrings(int m, int n, char s[m][n])
{
    int i;
for( i=0;i<m;i++)
{
printf("%s\n",s[i]);
}
}
void sort(int m, int n,char s[m][n])
{
int flag=0;
char temp[n];
int t=0;
int i,j;
for( i=0;i<m-1;i++)
{
	flag=0;
	for( j=0;j<m-i-1;j++)
	{
	t=strcmp(s[j],s[j+1]);
	if(t>0)
		{
		strcpy(temp,s[j]);
		strcpy(s[j],s[j+1]);
		strcpy(s[j+1],temp);
		flag=1;
		}
	}
	if(flag==0)
	{
	break;
	}
}
}
int search(int m, int n, char s[m][n], char *key)
{
int left=0;
int right=m;
int mid;
int t;
while(left<right)
	{
	mid=left+right/2;
	t=strcmp(s[mid],key);
	if(t<0)
		{
		left=mid+1;
		}
	if(t>0)
		{
		right=mid-1;
		}
	else
	{
	return mid;
	}
}
return -1;
}

int main()
{
int m;
int n=100;
printf("enter the no of strings\n");
scanf("%d",&m);
char strings[m][n];
inputstrings(m,n,strings);
sort(m,n,strings);
outputstrings(m,n,strings);
int r;
char key[20];
printf("enter the key to be searched\n");
scanf("%s",key);
r=search(m,n,strings,key);
if(r>=0)
	{
	printf("the position of the key is %d\n",r);
	}
else
	{
	printf("key is not found\n");
	}
return 0;
}
