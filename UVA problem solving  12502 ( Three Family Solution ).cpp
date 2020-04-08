#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,ans=0,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        ans =c*((2*a)-b)/(a+b);
        if(ans<=0)

     cout<<"0"<<endl;
            else
                cout<<ans<<endl;
    }
}
