/*to read year and check if leap year or not*/
#include<stdio.h>
int ly(int y);
int main()
{
  int y,x;
  printf("enter the year  :");
  scanf("%d",&y);
  x=ly(y);
  if(x==0)
  { 
    printf("it is a leap year\n");
  }
  else if(x==1)
  {
    printf("it is not a leap year\n");
  }
  return 0;
}
int ly(y)
{
  if(((y%4==0)&&(y%100!=0))||(y%400==0))
    return 0;
  else
    return 1;
}
