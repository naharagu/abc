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
	vector<double> x(n);
	vector<string> u(n);

	double ans = 0;
	rep(i, n)
	{
		cin >> x[i] >> u[i];
		if (u[i] == "JPY")
			ans += x[i];
		else
			ans += x[i] * 380000;
	}

	printf("%.10f\n", ans);
}
