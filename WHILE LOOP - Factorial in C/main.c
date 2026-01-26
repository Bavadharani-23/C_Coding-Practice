#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,fact=1,i=1;
    printf("Enter a number(n): ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Enter a positive number!");
    }
    else
    {
        while(i<=n)
        {
            fact = fact*i;
            i++;
        }
        printf("Factorial of %d: %d",n,fact);
    }
    return 0;
}
