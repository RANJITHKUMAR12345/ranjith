#include<stdio.h>
void main()
{
char a;
printf("enter the character");
scanf("%c",&a);
if(a>='a' && a<='z')
{
printf("%c alphabet",a);
}
else
{
printf("%c not alphabet",a);
}
getch();
}
