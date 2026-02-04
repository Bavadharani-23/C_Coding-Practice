#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rev=0;
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
        rev=rev*10 +(n%10);
        n=n/10;
    }
    if(original==rev)
    {
        printf("%d is a palindrome number",original);
    }
    else
    {
        printf("%d is not a palindrome number",original);
    }
    return 0;
}
