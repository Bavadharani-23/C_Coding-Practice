#include <stdio.h>
int main() {
    double n,p,x,diff;
    int it;
    scanf("%lf %d %lf",&n,&it,&p);
    x = n;
    for (int i=0;i<it;i++)
    {
        double nx=(x+n/x)/2;
        diff=nx-x;
        if(diff<0)
           diff=-diff;
        x =nx;
        if(diff < p)
         break;
    }
    printf("%.4f",x);
    return 0;
}
