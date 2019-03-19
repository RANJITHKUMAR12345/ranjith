#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,num;
printf("enter 2 number");
scanf("%d%d",&a,&b);
num=a*b;
if(num%2==0)
{
printf("product is even");
}
else
{
printf("product is odd");
}
getch();
}
