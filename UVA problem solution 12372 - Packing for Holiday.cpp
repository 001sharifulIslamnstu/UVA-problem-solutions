#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cnt =1,t;
    int l,w,h;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&l,&w,&h);

        printf("Case %d:",cnt++);
        if(l<=20 && w <=20 && h<=20)
            printf("good\n");
        else printf("bad\n");
    }
    return 0;


}
