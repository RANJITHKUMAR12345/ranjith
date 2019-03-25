#include <stdio.h>
#include<conio.h>
void main() 
{
    int a[10],i,n,rev=0,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    printf("%d",rev);
getch();
}
