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
	int n, x;
	cin >> n >> x;
	vector<int> m(n);
	int sum = 0;
	int small = INT_MAX;
	rep(i, n)
	{
		cin >> m[i];
		sum += m[i];
		small = min(small, m[i]);
	}

	int ans = n + (x - sum) / small;

	cout << ans << endl;
}
