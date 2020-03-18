#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,K,M,l;
    map <char,double> m;
    map <char, double>::iterator it;
    char ch;
    double v,sum;
    string line;


    scanf("%d",&T);
    while(T--)
    {
        sum =0;
        scanf("%d",&K);
        for(int i=0; i<K; i++)
        {
            cin>>ch>>v;
            m[ch]=v;


        }
        scanf("%d",&M);
        cin.ignore();
        for(int i=0;i<M;i++)
        {
            line ="";
            getline(cin,line);
            l =line.size();
            for(int j =0; j<l; j++)
            {
                it=m.find(line[j]);
                if(it!=m.end())
                    sum +=it->second;
            }
        }
        sum /=100;
        printf("%0.2lf$\n",sum);
        m.clear();
    }
    return 0;
}
