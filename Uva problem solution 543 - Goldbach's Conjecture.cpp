#include<bits/stdc++.h>

using namespace std;
int mark[1000000]={0},Prime[1000000],pt=0;
void Sieve()
{
    int i,j;
    for(int i =3; i< 1000000; i +=2)
    {
        if(mark[i] ==0)
        {
            Prime[pt++]=i;

            for(j=3;i*j<1000000;j+=2)
                mark[i*j] =1;
        }
    }
}

int main()
{
    int n,i;
    Sieve();

    while(cin>>n && n)
    {
        int x,y,f=0,cnt=0;
        for(i=0;i<=n;i++)
        {
            x=Prime[i], y= n-Prime[i];
            if(x>y) break;
            if(mark[x]==0 && mark[y]==0){
                cnt++;
                f=1;

            }
        }
        cout<<cnt<<endl;
        if(!f)
        {
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }

    }
}
