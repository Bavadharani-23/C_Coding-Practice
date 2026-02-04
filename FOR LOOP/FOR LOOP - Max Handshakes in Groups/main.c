#include <stdio.h>
int main()
{
    int n,total=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        total+= a*(a- 1)/2;
    }
    printf("%d",total);
    return 0;
}
