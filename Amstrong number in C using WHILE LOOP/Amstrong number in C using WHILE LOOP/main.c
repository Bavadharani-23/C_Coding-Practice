#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,sum=0,digit;
    printf("Enter a number(n): ");
    scanf("%d",&n);
    int original = n;
    if(n<0)
    {
        printf("Please enter a positive number!");
        return 0;
    }
    while(n>0)
    {
        digit=n%10;
        sum+=digit * digit*digit;
        n=n/10;
    }
    if(sum==original)
    {
        printf("Final sum: %d\n",sum);
        printf("%d is a Amstrong number",original);
    }
    else
    {
        printf("Final sum: %d\n",sum);
        printf("%d is not a Amstrong number",original);
    }
    return 0;
}
