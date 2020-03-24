#include<bits/stdc++.h>

using namespace std;

int f(int n)
{
    if(n==0) return 0;
    if(n<10) return n;
        int ans =0;
    while(n)
    {
        ans+=n%10;
        n /=10;
    }
    return f(ans);
}

int main()
{
    int n;
    while(cin>>n)
    {
        if(f(n))
        cout<<f(n)<<endl;
    }
    return 0;
}
