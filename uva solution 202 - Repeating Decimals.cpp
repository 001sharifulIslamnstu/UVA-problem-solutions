#include<bits/stdc++.h>

using namespace std;
const int maxn = 100000+5;
int a,b, vis[maxn],res[maxn];
int main()
{
    while(scanf("%d %d",&a,&b)==2)
    {
        memset(vis,-1,sizeof(vis));
        int c = a%b,cnt =0;
        c*=10;
        while(vis[c]==-1)
        {
            res[cnt]=c/b;
            vis[c]=cnt++;
            c%=b;
            c*=10;
        }
        int s_p =vis[c];
        printf("%d/%d = %d.",a,b,a/b);
        for(int i=0; i< s_p;i++)
        {
            printf("%d",res[i]);
        }
        printf("(");
        if(cnt - s_p <= 50)
        {
            for(int i=s_p;i<cnt;i++)
            {
                printf("%d",res[i]);
            }
        }
        else{
            for(int i = s_p;i<s_p+50;i++)
            {
                printf("%d",res[i]);
            }
            printf("...");

        }
        printf(")\n");
        printf("    %d = number of digits in repeating cycle\n\n", cnt - s_p);
    }
   return 0;
}
