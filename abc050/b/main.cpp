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
	int n;
	cin >> n;
	vector<int> t(n);
	int sum = 0;
	rep(i, n)
	{
		cin >> t[i];
		sum += t[i];
	}

	int m;
	cin >> m;
	// vector<int> p(m);
	// vector<int> x(m);
	// rep(i, m)
	// 	cin >> p[i] >> x[i];

	rep(i, m)
	{
		int p, x;
		cin >> p >> x;

		cout << sum - (t[p - 1] - x) << endl;
	}
}
