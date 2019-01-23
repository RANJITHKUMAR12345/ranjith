#include <stdio.h>

int main()
{
    int i,j,n,a[10];

    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]+a[j]==0)
            {
                printf("\n%d\t%d",a[i],a[j]);
            }
            else if(a[i]+a[j]==-1)
            {
                printf("\n%d\t%d",a[i],a[j]);
                
            }
                else if(a[i]+a[j]==1)
            {
                printf("\n%d\t%d",a[i],a[j]);
                
            }
        }
    }

    return 0;
}
