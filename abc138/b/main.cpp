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

	vector<int> a(n);
	rep(i, n)
		cin >> a[i];

	double ans;

	double n1 = 1.0;
	double n2 = 0.0;

	rep(i, n)
	{
		n1 *= a[i];
	}

	rep(i, n)
	{
		n2 += n1 / a[i];
	}

	ans = n1 / n2;

	cout << ans << endl;
}
