#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c, a1,b1,ans,cry;
    while(scanf("%lld %lld", &a,&b))
    {
        if(!a && !b) break;
             cry =c = 0;
    while(a || b)
    {
        a1=a%10;
        a/=10;
        b=b%10;
        b/=10;
        ans = a1+b1+c;
        if(ans>9)
        {
            c=1;
            cry++;
        }
        else
            c=0;
    }
     if(!cry)
        printf("No carry operation.\n");
     else if(cry==1)
    {
    printf("1 carry operation.\n");
    }
     else
     {
         printf("%lld carry operations.\n",cry);
     }
    }

}
