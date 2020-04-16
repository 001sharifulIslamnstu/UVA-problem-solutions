#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,c=1;
    cin>>t;
    while(t--)
    {
        int i,ans=0;
        cin>>a>>b;
        if(a%2==0)
            i=a+1;
        else
        {
            i=a;
        }
        for(i;i<=b;i+=2)
           ans=ans+i;

         cout<<"Case "<<c<<": "<<ans<<endl;
         c++;
    }
}
