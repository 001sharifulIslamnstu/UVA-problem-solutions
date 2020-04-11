#include<bits/stdc++.h>

using namespace std;



int main()
{
    char arr[100];
    double val=0,ans=0,l=0,r=0;
    int hh,mm,ss;
    while(gets(arr))
    {
        sscanf(arr,"%d:%d:%d",&hh,&mm,&ss);

        r=hh+mm/60.0+ss/3600.0;;
        if(arr[8]=='\0')
        {
            ans+=(r-l)*val;
            printf("%s %.2lf km\n",arr,ans);
        }
        else
        {
            ans+=(r-l)*val;
            sscanf(arr+8,"%lf",&val);

        }
        l=r;

    }
    return 0;
}
