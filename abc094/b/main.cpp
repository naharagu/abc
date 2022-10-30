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
	int n, m, x;
	cin >> n >> m >> x;

	int ans_0 = 0;
	int ans_n = 0;

	vector<int> a(m + 1, 0);
	rep1(i, m)
	{
		cin >> a[i];
	}

	ans_0 = lower_bound(a.begin(), a.end(), x) - a.begin() - 1;
	ans_n = a.end() - lower_bound(a.begin(), a.end(), x);

	cout << min(ans_0, ans_n) << endl;
}
