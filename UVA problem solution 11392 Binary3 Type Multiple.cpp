#include<bits/stdc++.h>

using namespace std;
typedef pair<int, int> pint;
int num[1000010];
int n;

long long calc(long long a, long long b)
{
    long long val =a*10+b;
    return val%n;
}
pair<int, int> bfs(){
    long long temp = 0;
    long long cacu;
    for(int i = 1;;i++){
        temp = calc(temp,3);
        cacu = temp;
        int sum = 0;
        while (1) {
            if(cacu == 0)
                return {i,sum};
            cacu = calc(cacu, 0);
            if(num[cacu] == 1)
                break;
            num[cacu] = 1;
            sum++;
        }
    }
    return {0,0};
}

int main()
{
    while(cin>>n)
    {
        memset(num,0,sizeof(num));
        pint res;
        res =bfs();
         printf("%d %d %d\n", res.first+res.second, res.first, res.second);

    }
}

