#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,col,n,s;
    cin>>t;
    while(t--)
    {
        cin>>col;
        set<int> m;
        for(int i=0; i< col; i++)
        {
            cin>>n>>s;
            m.insert(abs(n-s));
        }
        if(m.size()==1)
            printf("yes\n");
        else
            printf("no\n");
        printf("\n");
    }
}
