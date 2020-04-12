#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,g,d,c,max,cnt;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0 && b==0)
           {
                break;
           }
        if(a>b)
        {
            a^=b^=a^=b;

        }
        d=a;
        g=max=0;
        for( ; a<=b; a++)
        {
            c=a;
            cnt =0;
            while(1)
            {
                if(c%2==0)
                {
                    c/=2;
                }
                else
                {
                    c=3*c+1;
                }
                cnt++;
                if(c==1)
                break;
            }
            if(cnt>max)
            {
                max=cnt;
                g=a;
            }
        }
        printf("Between %lld and %lld,%lld generates the longest sequence of %lld values.\n",a,b,g,max);
    }
    return 0;
}
