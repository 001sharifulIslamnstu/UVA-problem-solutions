#include<bits/stdc++.h>
#define SWAP(a,b) a=a^b, b=a^b, a=a^b
using namespace std;





int main()
{
    int n,rev;
    while(scanf("%d",&n)==1)
    {
        rev =n;
        char * bits =(char*) &rev;
        SWAP(bits[0],bits[3]),SWAP(bits[1],bits[2]);
        printf("%d converts to %d\n",n,rev);

    }
    return 0;
}
