#include <stdio.h>
int main()
{
    int n,ans=0,rev=0;
    scanf("%d",&n);
    if(n==0)
    {
        printf("1");
        return 0;
    }
    while(n>0)
    {
        int a = n%10;
        if(a==0)
            a=1;
        rev= rev*10+a;
        n/=10;
    }
    while(rev>0)
    {
        ans = ans*10+ (rev%10);
        rev/=10;
    }
    printf("%d",ans);
    return 0;
}
