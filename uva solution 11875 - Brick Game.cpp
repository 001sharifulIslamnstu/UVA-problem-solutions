#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,p[10],age,i,j;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d",&n);
            for(j=1;j<=n;j++)
            {
                scanf("%d",&p[j]);
            }
            age =p[(n+1)/2];
            printf("Case %d: %d\n",i,age);

        }
        return 0;
    }
    return 0;
}
