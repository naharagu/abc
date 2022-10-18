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
	double a, b, c, x;
	cin >> a >> b >> c >> x;

	double ans = 0;

	if (x < a)
		ans = 1;
	else if (x < b)
	{
		ans = c / (b - a);
	}

	printf("%.12f\n", ans);
}
