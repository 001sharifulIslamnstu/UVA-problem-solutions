#include<bits/stdc++.h>

using namespace std;

int main()
{

    while(1)
    {
        int n,ans=0;
        cin>>n;
        if(!n)
        {
            break;
        }
       ans=0;
        while(n>=3)
        {
            ans+=n/3;
            n=n%3+n/3;

        }
        if(n==2)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
}
