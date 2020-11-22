#include<bits/stdc++.h>



using namespace std;

int main()
{
    const char abc[27]={"22233344455566670778889990"};

    int T;
    cin>> T;
    while(T--)
    {
        int n,i;
        char c, num[9];
        map<string, int> M;
        cin>>n;
        getchar();
        for( i=0 ; i < n ; i++)
        {
            int idx =0;
            while((c =getchar()) !='\n')
            {
                if(isdigit(c))
                    num[idx++] =c;
                else if(isalpha(c) &&  c!= 'Q' && c!='Z')
                {
                    num[idx++] = abc[c-'A'];

                }
                if(idx == 3)
                    num[idx++] = '-';
            }
            num[idx] =NULL;
            M[string(num)]++;
        }

        bool no = true;
        for(map<string, int >::iterator it = M.begin(); it !=M.end(); it++)
        {
            if(it -> second >1)
            {
                if(no)
                    no = false;
                cout<<it -> first.c_str()<<" " <<it -> second<<endl;
            }
        }
        if(no)
            cout<<"NO duplicates.";
        if(T)
            cout<<endl;
    }
    return 0;

}



