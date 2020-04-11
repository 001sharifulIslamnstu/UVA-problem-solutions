#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i =1; i<= t; ++i)
    {
        int n,k,p;
        cin>>n>>k>>p;
        k--;
        cout<<"Case "<<i<<": "<<((k+p)%n)+1<<endl;

    }
}
