#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

#define REP(i,n) for(int i=0; _n=n; i< _n;i++)

vector<int > G[20];
int dp[201][21];

int buy(int m, int c)
{
    if(m<0) return -2;
    if(c==0) return 0;

    int &ret =dp[m][c];
    if( ret! =-1) return ret;

    ret = -2;
    REP(i,G[c-1].size())
    {
        int ci = G[c-1][i];
        if(buy(m-ci,c-1)!=-2)
            ret >? =(b)
    }

}
