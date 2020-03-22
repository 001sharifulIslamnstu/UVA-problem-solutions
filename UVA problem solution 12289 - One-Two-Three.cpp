#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
     scanf("%d", &T);
     while(T--)
     {
         char a[10];
         scanf("%s",a);
         if(strlen(a)== 5) printf("3\n");
         else
         {
             int cnt =0;
             if(a[0]=='o') cnt++;
             if(a[1]== 'n') cnt++;
             if(a[2]== 'e') cnt++;

             if(cnt>=2) printf("1\n");
             else printf("2\n");


         }
     }
     return 0;
}
