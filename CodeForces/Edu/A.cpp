#include <bits/stdc++.h>

using namespace std;

const int N = 55;
vector<int> factors;
void gen(int n) {
	for (int i = 2; 1ll * i * i <= n; ++i) {
		while (n % i == 0) {
			factors.push_back(i);
			n /= i;
		}
	}
	if (n != 1)
		factors.push_back(n);
}
int main() {
#ifndef ONLINE_JUDGE
	//freopen("input.in", "r", stdin);
#endif
	int n, k;
	scanf("%d %d", &n, &k);
	gen(n);
	if (factors.size() < k) {
		printf("-1\n");
	} else {
		for (int i = 0; i < k - 1; ++i) {
			printf("%d ", factors[i]);
		}
		int t = 1;
		for (int i = k - 1; i < factors.size(); ++i) {
			t *= factors[i];
		}
		printf("%d\n", t);
	}
	return 0;
}
