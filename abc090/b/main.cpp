#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main()
{
	int a, b;
	cin >> a >> b;

	int ans = 0;

	while (a < b + 1)
	{
		int digit_5 = a / 10000 % 10;
		int digit_4 = a / 1000 % 10;
		int digit_2 = a / 10 % 10;
		int digit_1 = a % 10;

		if (digit_5 == digit_1 && digit_4 == digit_2)
			ans++;
		a += 1;
	}

	cout << ans << endl;
}
