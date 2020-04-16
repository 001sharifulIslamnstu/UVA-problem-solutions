#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,ct,a;
    while(scanf("%d %d",&n,&k)==2)
    {
        ct =0;
        a =0;
        while(n>0)
        {
            ct+=n;
            a+=n;
            n=a/k;
            a%=k;
        }
        printf("%d\n",ct);

    }
    return 0;
}
