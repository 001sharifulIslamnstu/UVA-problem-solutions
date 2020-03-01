#include<bits/stdc++.h>

using namespace std;
int MAX =1024;

int val[1024][1024];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,d,n,x,y,p;

    cin>>t;

    memset(val,0,sizeof(val));
    while(t--)
    {
        cin>>d>>n;

        for(int i=0;i<n;i++)
        {
            cin>>x>>y>>p;
            for(int j = x-d; j<=x+d;j++)
            {
                if(j<0 || j>= MAX)
                {
                    continue;
                }

                for(int k =y-d;k<=y+d ;k++)
                {
                     if(k<0 || k>= MAX)
                        continue;
                     val[j][k]+=p;
                }
            }
        }
        int maxi =-1;
        for(int i=0;i<MAX;i++)
        {
            for(int j=0;j<MAX;j++)
            {
               if(val[i][j]>maxi)
               {
                x=i;
                y=j;

                maxi= val[i][j];
               }
            }
        }

      cout<<x<<" "<<y<<" "<<maxi<<endl;
    }
    return 0;
}
