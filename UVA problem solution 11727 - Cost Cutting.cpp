#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, tmp, a, b, c,ans;
    int Case = 0;
    scanf("%d", &t);
    int p=1;
    while(t--)
   {
   scanf("%d%d%d",&a,&b,&c);

   if(a>b && b>c || a<b && b<c)
   ans=b;
   if(a>c && c>b || a<c && c<b)
   ans=c;
   if(b>a && a>c || b<a && a<c)
   ans=a;
   printf("Case %d: %d\n",p,ans);
   p++;
   }
   return 0;
}
