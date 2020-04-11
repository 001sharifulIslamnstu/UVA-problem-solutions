#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,r,t=0;
    while(scanf("%d %d",&r,&n) && n)
    {
        printf("Case %d: ",++t);
        if(26*n+n<r)
            printf("impossible\n");
        else
            printf("%d\n",r%n == 0? r/n-1:r/n);
    }
    return 0;
}
