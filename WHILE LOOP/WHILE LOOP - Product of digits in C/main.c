#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number(n): ");
    scanf("%d",&n);
    int digit=0,product=1;
    if(n<0)
    {
        printf("Enter a positive number!");
    }
    else
    {
        while(n>0)
        {
            digit = n%10;
            product =product*digit;
            n=n/10;
        }
        printf("Product of n : %d",product);
    }
    return 0;
}
