#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
	int banks, debentures, temp;
	bool flag;
	int *reserves;
	while (scanf("%d %d", &banks, &debentures) && (banks || debentures)) {
		flag = true;
		reserves = new int[banks];
		temp = debentures;
		for (int a = 0; a < banks; a++) {
			scanf("%d", &reserves[a]);
		}
		while (temp--) {
			int d, c, v;
			scanf("%d %d %d", &d, &c, &v);
			reserves[d - 1] -= v;
			reserves[c - 1] += v;
		}
		for (int a = 0; a < banks; a++) {
			if (reserves[a] < 0) {
				flag = false;
			}
		}
		cout << ((flag) ? "S" : "N") << endl;
		delete[]reserves;
	}
	return 0;
}
