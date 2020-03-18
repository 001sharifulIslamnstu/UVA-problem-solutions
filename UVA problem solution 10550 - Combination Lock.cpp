#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a1,a2,a3,ans;
    while(scanf("%d %d %d %d",&n,&a1,&a2,&a3),n|| a1|| a2||a3)
    {
        ans=1000;
        ans += (n - a1) > 0 ? (n - a1) * 9 : (n - a1 + 40) * 9;
		ans += (a2 - a1) > 0 ? (a2 - a1) * 9 : (a2 - a1 + 40) * 9;
		ans += (a2 - a3) > 0 ? (a2 - a3) * 9 : (a2 - a3 + 40) * 9;
		printf("%d\n", ans);
    }
}
