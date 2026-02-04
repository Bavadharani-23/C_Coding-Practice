#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,ans;
    scanf("%d",&n);
    while(i<=10)
    {
        ans = n*i;
        printf("%dX%d=%d\n",n,i,ans);
        i++;
    }
    return 0;
}
