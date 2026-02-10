#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int original = n;
    while(n>=10)
    {
        n=n/10;
    }
    printf("%d is the first digit of %d",n,original);
    return 0;
}
