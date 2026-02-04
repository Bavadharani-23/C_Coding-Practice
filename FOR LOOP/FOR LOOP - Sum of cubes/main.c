#include <stdio.h>
int main()
{
    int n,a,cube,sum=0;
    scanf("%d %d",&n,&a);
    while(n<=a)
    {
       sum+= n*n*n;
       n++;
    }
    printf("%d",sum);
    return 0;
}
