#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,a[100000],i,x;
scanf("%d %d\n",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
for(int j=1;j<=k;j++)
{
x=a[n-1];
for (i = n-1; i > 0; i--)
      a[i] = a[i-1];
   a[0] = x;
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
getch();
}
