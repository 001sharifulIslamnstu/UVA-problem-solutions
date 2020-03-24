#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t,a,n,p,f;
    scanf("%d",&t);
    while(t--)
    {
        int ans =0;
        scanf("%d",&f);
        for(int i=0; i<f; i++)
        {
            scanf("%d %d %d",&a, &n, &p);
            ans +=a*p;
        }
        printf("%d\n",ans);

    }
    return 0;
}
