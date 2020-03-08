#include<cstdio>
#include<map>
#include<cstring>
#include<cctype>

using namespace std;

map<char,int> frequency;

int main()
{
    char s[1000];
    int max;
    while (gets(s))
    {
        frequency.clear();
        max =-1;
        for(int i =0; i<(int) strlen(s); i++)
        {
            if(isalpha(s[i]))
            {
                if(frequency.count(s[i]) == 0)
                    frequency[s[i]] =1;
                else
                    frequency[s[i]] = frequency[s[i]] +1;
                if(max < frequency[s[i]])
                    max = frequency[s[i]];
            }
        }

        map<char,int>::iterator it;

        for(it = frequency.begin(); it != frequency.end(); it++)
        {
            if(it-> second == max)
            {
                printf("%c", it->first);
            }
        }
        printf(" %d\n",max);


    }

    return 0;
}
