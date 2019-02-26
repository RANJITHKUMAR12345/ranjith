#include<stdio.h>
void main()
{
int a,b;
printf("enter a,b\n");
scanf("%d\t%d\n",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("the  swpping  values\n");
printf("%d\t%d",a,b);
}
