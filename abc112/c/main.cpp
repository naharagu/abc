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

	vector<int> x(n), y(n), h(n);
	// int x[n], y[n], h[n];
	rep(i, n)
		cin >> x[i] >> y[i] >> h[i];

	rep(x, 101)
	{
		rep(y, 101)
		{
			int z = 1;
			rep(i, n)
			{
				if (h[i])
					z = h[i] + abs(x[i] - x) + abs(y[i] - y);
			}

			bool flag = true;
			rep(i, n)
			{
				if (h[i] != max(z - abs(x[i] - x) - abs(y[i] - y), 0))
					flag = false;
			}

			if (flag)
			{
				printf("%d %d %d\n", x, y, z);
				return 0;
			}
		}
	}

}
