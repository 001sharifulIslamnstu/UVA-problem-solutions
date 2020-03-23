#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ldur,rec;
    double dpayment,loan,decp[101];
    while(true)
    {
        cin>> ldur>> dpayment>> loan >> rec;
        if(ldur<0)
            break;
        int m;
        double p;
        while(rec--)
        {
           cin>>m>>p;
           for(int i=m; i<101;i++)
           {
               decp[i]=p;
           }


        }
        int now =0;
        double monpay =loan/ldur;
        double curval =(loan+dpayment)*(1-decp[0]);
        double curloan =loan;
        while(curval <curloan)
        {
            now++;
            curloan -=monpay;
            curval =curval * (1-decp[now]);
        }
        cout<< now <<" month";
        if(now !=1)
            cout<<"s";
        cout<<endl;
    }
    return 0;
}
