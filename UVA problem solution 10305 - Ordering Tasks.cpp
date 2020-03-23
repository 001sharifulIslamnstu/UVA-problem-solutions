#include<bits/stdc++.h>
#define MAXN 101
using namespace std;


vector<int > g[MAXN];
int id, top[MAXN],seen[MAXN];
void DFS(int x)
{
    seen[x]=1;
    for(size_t i=0;i<g[x].size();i++)
    {
        if(!seen[g[x][i]]) DFS(g[x][i]);
        top[id--] =x;
    }
}

void top_sort(int n)
{
    memset(seen, 0, sizeof(seen));
    id =n -1;
    for(int i=0; i<n; i++)
        if(!seen[i]) DFS(i);
}



int main()
{
    int n,m,i,x,y;
    while(scanf("%d %d ",&n,&m)==2 && (n>0 || m>0))
    {
        for(i=0;i<n;i++)
            g[i].clear();
        for(i=0;i<m;i++)
        {
            scanf("%d %d ",&x,&y);
            g[--x].push_back(--y);
        }
        top_sort(n);
        for(i=0;i<n;i++)
            printf("%d%c",++top[i],(i==n-1)?'\n':' ');

    }
    return 0;
}
