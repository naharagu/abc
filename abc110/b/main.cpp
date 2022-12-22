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
	int n, m, x, y;
	cin >> n >> m >> x >> y;

	vector<int> a(n), b(m);
	rep(i, n)
		cin >> a[i];
	rep(i, m)
		cin >> b[i];

	for (int z = x + 1; z <= y; z++)
	{
		bool flag = true;

		rep(k, n)
		{
			if (a[k] >= z)
				flag = false;
		}
		rep(k, m)
		{
			if (b[k] < z)
				flag = false;
		}
		if (flag)
		{
			cout << "No War" << endl;
			return 0;
		}
	}

	cout << "War" << endl;
}
