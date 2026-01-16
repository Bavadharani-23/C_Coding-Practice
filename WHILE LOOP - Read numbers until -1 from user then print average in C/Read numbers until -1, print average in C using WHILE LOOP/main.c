#include<stdio.h>
int main()
{
    int n,sum=0,count=0,avg;
    printf("Enter a number(n):");
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
            break;
        sum+=n;
        count++;
    }
    printf("Sum : %d\nCount : %d\n",sum,count);
    if(count>0)
    {
        avg = sum/count;
        printf("Average: %d",avg);
    }
    else
        printf("Enter a positive number!...");
    return 0;
}
