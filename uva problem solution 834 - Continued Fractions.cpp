#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,a,b,c,x,y;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        n=a/b;
        printf("[%lld;",n);
        c=a%b;
        while(c!=0)
        {
            x=b;
            y=c;
            n=x/y;
            printf("%lld",n);
            c=x%y;
            if(c>0)
                printf(",");
            b=y;
        }
        printf("]\n");
    }
    return 0;
}




