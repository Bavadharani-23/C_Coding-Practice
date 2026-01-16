#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=0;
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
            int digit = n%10;
            n=n/10;
            count++;
        }
        printf("Number of digits: %d",count);
    }
    return 0;
}
