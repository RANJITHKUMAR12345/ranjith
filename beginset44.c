#include<stdio.h>
void main()
{
char a[100];
int b=1,i;
for(i=0;i<=20;i++)
{
scanf("%c",&a[i]);
if((a[i]==' '))
b=b+1;
}
printf("%d",b);
}
