#include <stdio.h>
#include <math.h>

int main()
{
    int n,a,mul;
    float sum=0;
    scanf("%d %d",&n,&a);
    if(n<=0 || a<=0)
        printf("0.00");
    else
    {
        for(int i=1;i<=a;i++)
        {
            mul = pow(n,i);
            sum+=mul;
        }
        printf("%.2f",sum);
    }
    return 0;
}
