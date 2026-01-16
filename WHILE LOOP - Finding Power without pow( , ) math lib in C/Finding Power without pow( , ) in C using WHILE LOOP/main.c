#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,ans=1,i=1;
    printf("Enter a number(n)2: ");
    scanf("%d",&n);
    printf("Enter a value for a: ");
    scanf("%d",&a);
    while(i<=a)
    {
        ans = ans*n;
        i++;
    }
    printf("%d^%d = %d",n,a,ans);
    return 0;
}
