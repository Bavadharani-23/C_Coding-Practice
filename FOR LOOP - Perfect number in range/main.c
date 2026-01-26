#include <stdio.h>
int main()
{
    int m,n,sum=0,flag=0;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(i<=1)
            continue;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
               sum+=j;
        }
        if(sum==i)
        {
            if(!flag)
            {
                printf("Perfect number : ");
                printf("%d ",i);
                flag=1;
            }
        }
    }
    if(!flag)
       printf("Perfect numbers : None");
    return 0;
}
