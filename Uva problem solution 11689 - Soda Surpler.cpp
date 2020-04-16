#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int e,f,c,ans=0;
        cin>>e>>f>>c;
        e+=f;
        while(e>=c)
        {
            ans+=e/c;
            e=e%c+e/c;
        }
        cout<<ans<<endl;
    }
}
