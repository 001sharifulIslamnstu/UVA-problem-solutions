#include<bits/stdc++.h>
using namespace std;
#define Mx 1000000

int prime[Mx],mark[Mx]={0},pt=1;

void Sieve()
{
    int i,j;
    prime[0]=2;
    mark[1]=1;
    mark[0]=0;

   for(int i =3; i< 1000000;i+=2)
    {
        if (mark[i]==0)
        {
            prime[pt++]=i;
            for ( j=3; i*j<1000000; j +=2)
                mark[i*j] = 1;
        }
    }

}


int main()
{
  Sieve();
  int t,l,u,m[6000];
  vector <int> v;
  cin>>t;
  while(t--)
  {
      cin>>l>>u;

      memset(m,0,sizeof(m));

      for(int i=0;i<=pt;i++)
      {
          if(prime[i+1]>u)
            break;
          if(prime[i]>= l && prime[i+1]<=u)
          {
              m[prime[i+1]-prime[i]]++;
          }
      }
      int k =0;
      for(int i =1; i<150;i++)
      {
          if(m[k]<m[i])
            k=i;
      }
      int cnt =0;
      for(int i=1;i<150;i++)
      {
          if(m[k]==m[i])
            cnt++;
      }
      if(k<1 || cnt>1)

        cout<<"No jumping champion"<<endl;
      else
        cout<<"The jumping champion is "<<k<<endl;

  }
  return 0;

}
