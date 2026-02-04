#include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    if(n<0)
       n=-n;
    if(n==0)
    {
        printf("1");
        return 0;
    }
    while(n>0)
    {
        int a=n%10;
        int fact = 1;
        for(int i=1;i<=a;i++)
        {
            fact = fact *i;
        }
        sum+=fact;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}
