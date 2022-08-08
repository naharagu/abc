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
	int n, k;
	cin >> n >> k;

	double ans = 0;

	for (int i = 1; i <= n; i++)
	{
		int j = i;
		double p = 1.0 / n;

		while (j < k)
		{
			j *= 2;
			p /= 2;
		}
		ans += p;
	}
	printf("%.12f\n", ans);
}
