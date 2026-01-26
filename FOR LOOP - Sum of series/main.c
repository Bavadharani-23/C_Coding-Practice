#include<stdio.h>
int main()
{
    int next_term,no_term,series,sum=0;
    scanf("%d %d",&next_term,&no_term);
    for(int i=1;i<=no_term;i++)
    {
        series = next_term*i;
        printf("%d ",series);
        sum+=series;
    }
    printf("\n%d",sum);
    return 0;
}
