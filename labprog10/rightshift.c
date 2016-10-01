#include<stdio.h>
unsigned int rightshift(unsigned int x, unsigned int n)
{
int y,z,a;
a=x>>n;
z=x<<(16-n);
y=a|z;

return y;
}
int main()
{
unsigned int x,x1,n,y,z,a;
printf("enter the value of x\n");
scanf("%u",&x);
printf("enter the no of rotations\n");
scanf("%u",&n);
x1=rightshift(x,n);
printf("after rotating %u bits to the right ,%u becomes-%u\n",n,x,x1);
return 0;
} 
