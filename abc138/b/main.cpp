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

	vector<double> a(n);
	rep(i, n)
		cin >> a[i];

	double ans = 1;

	double n1 = 0;

	rep(i, n)
	{
		n1 += 1.0 / a[i];
	}

	ans = 1 / n1;

	printf("%.10f\n", ans);
}
