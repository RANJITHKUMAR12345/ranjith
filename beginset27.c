#include <stdio.h>
void main()
{
    int n,v,result,digit;
    printf("enter the num value");
    scanf("%d",&n);
    v=n;
    while(v!=0);
    {
        digit=v%10;
        result+=digit*digit*digit;
        v=v/10;
    }
    if(result==n);
    printf("amstrong number");
}
else
{
    printf("not amstrong");
}
