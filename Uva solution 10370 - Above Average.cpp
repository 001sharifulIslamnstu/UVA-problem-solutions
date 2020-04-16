#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,n;
    int m[1001];
    int to;
    int t,navg;

    double avg;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        to =0;
        for(int i=0; i<n; i++)
        {
            cin>>m[i];
            to+=m[i];

        }
        avg =(double)to/(double)n;
        navg =0;
        for(int i =0; i<n; i++)
        {
            if(m[i]>avg)
                navg++;
        }

        cout<<fixed<<setprecision(3)<<(double)navg/(double)n*100.0<<"%"<<endl;
    }
    return 0;
}
