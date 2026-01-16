#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,digit;
    printf("Enter a number(n): ");
    scanf("%d",&n);
    int evenCount=0,oddCount=0;
    while(n>0)
    {
       digit = n%10;
       n=n/10;
       if(digit%2==0)
       {
           evenCount++;
       }
       else
       {
           oddCount++;
       }
    }
    printf("Even number count = %d\nOdd number count = %d",evenCount,oddCount);
    return 0;
}
