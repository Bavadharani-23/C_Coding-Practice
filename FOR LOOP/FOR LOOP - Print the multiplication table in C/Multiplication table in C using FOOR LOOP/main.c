#include <stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        j=n*i;
        printf("%d x %d = %d\n",n,i,j);
    }
    return 0;
}
