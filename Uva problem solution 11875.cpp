#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,s[100];

    while(cin>>t)
    {
        for(int i=1; i<=t; i++)
        {
            cin>>n;
            int j;
            for(j=0;j<n;j++)
            {
                cin>>s[j];
            }
            cout<<"Case "<<i<<":"<<s[j/2]<<endl;
        }
    }
}
