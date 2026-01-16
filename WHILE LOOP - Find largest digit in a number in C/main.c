#include <stdio.h>
int main()
{
    int n,digit,max=0;
    printf("Enter a number(n): ");
    scanf("%d",&n);
    while(n>0)
    {
        digit = n%10;
        n=n/10;
        if(max<digit)
        {
            max=digit;
        }
    }
    printf("max = %d",max);
    return 0;
}
1
