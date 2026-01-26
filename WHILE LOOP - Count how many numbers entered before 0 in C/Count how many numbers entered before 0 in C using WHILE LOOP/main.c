#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Count how many numbers entered before 0
    int n,count=0;
    printf("Enter a value(n): ");
    while(n>=0)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
           count++;
        }
    }
    printf("Count=%d",count);
    return 0;
}
