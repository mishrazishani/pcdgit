#include<stdio.h>
#include<stdlib.h>
struct student
{
char name[80];
char usn[8];
};
int combine_nameandusn(char *file1, char *file2, struct student s[100])
{
FILE *fp1;
FILE *fp2;
fp1=fopen(file1,"r");
if(fp1==NULL)
	{
	printf("read error %s", file1);
	return -1;
	}
fp2=fopen(file2,"r");
if(fp2==NULL)
	{
	printf("read error %s", file2);
	return -2;
	}
int i;
for(i=0;!feof(fp1) && !feof(fp2);i++)
	{
	fscanf(fp1,"%s",s[i].name);
	fscanf(fp2,"%s",s[i].usn);
	}
return i;
}
void writestudent(char *file, int n, struct student s[])
{
FILE *fp;
int i;
fp=fopen(file,"w");
for(i=0;i<n;i++)
	{
	fprintf(fp,"%s %s\n", s[i].name, s[i].usn);
	}
}
int main()
{
struct student s[100];
int n;
n=combine_nameandusn("student.txt", "usn.txt", s);
writestudent("output.txt",n,s);
return 0;
}
