#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,m,d,r,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;

        cnt = 0;
        while(1)
        {
            d = n/m;
            r = n%m;
            cnt +=d;
            if(d==0 && r==n)
            {
                cout<<"cannot do this"<<endl;
                break;
            }
            if(r ==0 && d==1)
            {
                cout<<cnt<<endl;
                break;
            }
            n=r+d;
        }
    }
}
