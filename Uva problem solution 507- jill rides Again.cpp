#include<bits/stdc++.h>

using namespace std;

int main()
{
   int b,s,n;
   int mx;
   int start,f_s,f_e;
   int sum;
   scanf("%d",&b);
   for(int r=1;r<=b;r++)
   {
       scanf("%d",&s);

   sum=-1;
   mx=0;
   start=-1;
   f_s=-1;
   f_e=-1;
   for(int i=1;i<s;i++)
   {
       scanf("%d",&n);

       if(sum>=0) sum +=n;
       else
       {
           sum =n;
           start =i;

       }
       if(sum >mx ||(sum ==mx && i+1-start>f_e - f_s))
       {
           mx =sum;
           f_e =i+1;
           f_s=start;
       }
   }
   if(mx == 0)
    printf("Route %d has no nice parts\n",r);
   else
    printf("The nicest part of route %d is between stop %d and %d\n",r,f_s,f_e);
   }
}
