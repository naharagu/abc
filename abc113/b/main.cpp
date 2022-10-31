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

double degree(int t, int x)
{
	return t - x * 0.006;
}

int main()
{
	int n;
	double t, a;
	cin >> n >> t >> a;

	vector<int> h(n);
	rep(i, n)
		cin >> h[i];

	int ans = 0;
	double difference = 10001;
	rep(i, n)
	{
		if (difference > abs(a - degree(t, h[i])))
		{
			difference = abs(a - degree(t, h[i]));
			ans = i + 1;
		}
	}

	cout << ans << endl;
}
