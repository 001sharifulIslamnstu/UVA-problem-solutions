#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,d;
    double e;
    while(scanf("%lld %lld",&a,&b) == 2)
    {
        scanf("%lf",&e);
        long double t =(long double)a/b,t2;
        for(d=1; ;d++)
        {
            c=(long long)(t*d);
            while(a*d>=b*c)
                c++;
            t2=(long double)c/d;
            if(t2-t<=e)
            {
                printf("%lld %lld\n",c,d);
                break;
            }
        }
    }
    return 0;
}
