
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, min = 100, max = 0, num;
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            scanf("%d", &num);
            if (num > max)
                max = num;
            if (num < min)
                min = num;
        }

        printf("%d\n", (max - min) * 2);
    }
    return 0;
}
