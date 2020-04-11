#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,tt=0;
    double d,v,u;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        double f1=d/u;
        double f2= d/sqrt(u*u-v*v);
        if(v>=u || f1==f2)
        {
            printf("Case %d: can't determine\n",++tt);
            continue;
        }
        printf("Case %d: %.3lf\n",++tt,f2-f1);
    }
    return 0;
}
