#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long m,x;
    while(cin>>m>>x)
    {
        if(!m && !x) break;
        if(x==100 || x == 0 || m == 0)
        {
            cout<<"Not found"<<endl;
            continue;
        }
        long long v = 100*(m-1)/(100-x);
        if((100*(m-1)%(100-x))==0) v--;
        if(v<m) cout<<"Not found"<<endl;
        else
        {
            cout<<v<<endl;
        }
    }
    return 0;
}
