#include<bits/stdc++.h>

using namespace std;



int main()
{
    int a,b,c,d,l;

    while(1)
    {
        cin>>a>>b>>c>>d>>l;
        int cnt=0;
        if(a==0 && b==0 &&  c==0 && d==0 && l==0)
        {
            break;
        }
        for(int i=0;i<=l; i++)
        {
            int x=i;
            int f=a*x*x + b*x +c;
            if(f%d==0)
            {
                cnt++;
            }

        }
        cout<<cnt<<endl;
    }
    return 0;
}
