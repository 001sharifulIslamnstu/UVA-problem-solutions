#include<bits/stdc++.h>

using namespace std;
vector<int>fi;
vector<string>se;
vector< pair<int, string> >re;

int main()
{
  int tt,in;
  scanf("%d",&tt);
  string s,t,str;
  getchar();
  while(tt--)
  {
      getchar();
      getline(cin,s);
      stringstream ss(s);
      while (ss>>in)
      {
          fi.push_back(in);
      }
      getline(cin,str);
      stringstream sst(str);

      while(sst>>t)
      {
        se.push_back(t);
      }
      int sztot = min(fi.size(), se.size());
      for( int i =0; i< sztot; i++)
      {
          re.push_back(make_pair(fi[i],se[i]));
      }
      sort(re.begin(),re.end());

      for(int i=0; i<sztot ; i++)
      {
          cout<<re[i].second<<endl;

      }
      fi.clear();
      se.clear();
      re.clear();
      if(tt)
      {
          printf("\n");
      }
  }
 return 0;

}




