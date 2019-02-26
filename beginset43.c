#include<stdio.h>
void main()
{
char c[100];
int b=1,i;
for(i=0;i<=20;i++)
{
scanf("%c",&c[i]);
if((c[i]==' '))
b=b+1;
}
printf("%d",b);
}
