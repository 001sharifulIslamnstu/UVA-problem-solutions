#include<bits/stdc++.h>

using namespace std;
int ch(int n)
{
    while(n)
    {
        if(n%10 == 7)
            return 1;
        n/=10;
    }
    return 0;
}

int main()
{
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        if(!n && !m && !k)
        {
            break;
        }
        int cnt = 0xfffffff;
        int sum =0,x,y,kk=0;
        while(cnt--)
        {
            x = sum + m;
            y = sum +n +(n-m);
            if(x%7 ==0 || ch(x))
            {
                kk++;
                if(kk==k)
                {
                    cout<<x<<endl;
                    break;
                }
            }
            if( m!= 1 && m!= n && (y%7 ==0 || ch(y)))
            {
                kk++;
                if(kk ==k)
                {
                   cout<<y<<endl;
                   break;
                }
            }
            sum += 2*n - 2;
        }
    }
    return 0;

}
