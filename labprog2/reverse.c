/*to find the reverse of a number and check if palindrome*/
#include<stdio.h>
int reverse(int x)
{
    int y;
    int rev=0;
    y=x;
while(y!=0)
{
 rev=rev*10;
 rev=rev+(y%10);
 y=y/10;
 }
return rev;
}
int main()
  {
  int x,b,y,rev;
  printf("enter the number\n");
  scanf("%d",&x);
  b=reverse(x);
  printf(" the reverse of the number is %d\n",b);
  if(y==rev)
    {
    printf("the number is a palindrome\n");
    }
  else
    {
    printf("the number is not a palindrome\n");
    }
return 0;
}
