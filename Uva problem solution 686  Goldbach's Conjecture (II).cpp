
#include<bits/stdc++.h>

using namespace std;

bool isp(int n)
{
    int i,j;
    if(n==1)
    return 0;

    if(n==2)
    return 1;

    if(n%2==0)
    return 0;

    int l=sqrt(n);

    for(i=3;i<=l;i+=2)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n,i;


    while(cin>>n && n)
    {
        int c=0;
        for(i=2;i<=n/2;i++)
        {

            if(isp(i) && isp(n-i)){
                c++;
            }
        }
        cout<<c<<endl;


    }
}
