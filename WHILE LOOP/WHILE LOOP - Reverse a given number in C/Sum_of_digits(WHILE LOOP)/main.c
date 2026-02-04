#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter a number(n): ");
    scanf("%d",&n);
    if(n>0)
    {
        while(n>0)
        {
            sum+=n%10;
            n=n/10;
        }
        printf("Sum of given number : %d",sum);
    }
    return 0;
}
