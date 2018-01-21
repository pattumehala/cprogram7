#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the three numbers");
scanf("%d %d %d",&x,&y,&z);
if((x>y) && (x>z))
{
printf("The largest number is%d:",x);
}
if((y>x) && (y>z))
{
printf("The largest number is%d:",y);
}
if((z>x) && (z>y))
{
printf("The largest number is%d:",z);
}
return 0;
}
