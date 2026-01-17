#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    printf("Enter a number(n): ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Enter a positive number!");
    }
    else
    {
        while(n>0)
        {
            sum+=n%10;
            n=n/10;
        }
        printf("Sum of given number(n) : %d",sum);
    }
    return 0;
}
