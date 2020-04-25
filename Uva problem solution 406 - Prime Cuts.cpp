#include<bits/stdc++.h>

using namespace std;

bool isp(int n)
{
    for(int i=2;i*i<=n; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main()
{
    vector<int>p;
    for(int i =1;i<=1000;i++)
    {
        if(isp(i))
            p.push_back(i);
    }
    bool l = false;
    int n,prnt;
    while(cin>>n>>prnt)
    {
        cout<<n<<' '<<prnt<<":";
        int cnt =0;
        for(int i=0; i<(int)p.size(); i++)
        {
            if(p[i]<=n)
            {
                cnt++;
            }
            else
                break;
        }
    int ans=cnt;
    if(ans%2==0)
        {
            if(2*prnt>ans)
            {
            for(int i=0;i<cnt;i++)
            {
                cout<<" "<<p[i];
            }
            cout<<endl;
           }
           else
           {
               int a=(ans-(2*prnt))/2;

               for(int i=a; i<ans-a;i++)
                cout<<" "<<p[i];

               cout<<endl;
           }
        }
        else
        {
            if(((2*prnt)-1)>ans)
            {
            for(int i=0;i<cnt;i++)
            {
                cout<<" "<<p[i];
            }
            cout<<endl;
           }
           else
           {
               int a=(ans-((2*prnt)-1))/2;

               for(int i=a; i<ans-a;i++)
                cout<<" "<<p[i];

               cout<<endl;
           }
        }
        cout<<endl;
    }
    return 0;
}
