#include<stdio.h>
#include<set>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int heads =0,knights =0;
    while(cin >>heads >> knights && 0!= heads && 0!= knights)
    {
        vector<int> vh(heads);
        for(int i =0; i< heads; i++)
        {
            cin>>vh[i];
        }
        vector<int >vk(knights);
        for(int i =0; i<knights; i++)
        {
            cin>>vk[i];
        }
        sort(vh.begin(),vh.end());
        sort(vk.begin(),vk.end());

        int i=0, j =0, k =0;
        for( ; i< heads && j< knights;)
        {
            if(vh[i]<= vk[j])
            {
                i++;
                vk[k++]=vk[j++];
            }
            else j++;
        }
        if(i<heads) cout <<"Loowater is doomed!"<<endl;
        else{

            long long coins =0;
            for (int i =0; i<k;i++)
            {
                coins += vk[i];
            }
            cout<<coins<<endl;
        }
    }
   return 0;
}
