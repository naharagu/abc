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
	double a, b;
	cin >> a >> b;

	double ans = a;
	int i = 1;
	while (true)
	{
		double tmp;
		tmp = i * b + a / sqrt(i + 1);
		if (tmp >= ans)
			break;
		else
			ans = tmp;
		i++;
	}

	printf("%.10f\n", ans);
}
