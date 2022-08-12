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
	int n, l;
	cin >> n >> l;

	int sum = 0;

	rep1(i, n)
		sum += l + i - 1;

	int min = INT_MAX;
	rep1(i, n)
	{
		if (min > abs(l + i - 1))
			min = abs(l + i - 1);
	}

	int ans = 0;
	if (sum >= 0)
		ans = sum - min;
	else
		ans = sum + min;

	cout << ans << endl;
}