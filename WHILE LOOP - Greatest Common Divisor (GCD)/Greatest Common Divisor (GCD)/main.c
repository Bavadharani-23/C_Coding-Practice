#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld",&a,&b);
    if(a< 0)a = -a;
    if(b< 0)b = -b;
    while (b!=0)
    {
        long long n = a%b;
        a = b;
        b = n;
    }
    printf("%lld", a);
    return 0;
}
