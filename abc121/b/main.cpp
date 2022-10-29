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
	int n, m, c;
	cin >> n >> m >> c;

	vector<vector<int>> a(n, vector<int>(m));
	vector<int> b(m);

	rep(i, m)
		cin >> b[i];

	int ans = 0;

	rep(i, n)
	{
		int check = 0;
		rep(j, m)
		{
			cin >> a[i][j];
			check += a[i][j] * b[j];
		}
		if (check + c > 0)
			ans++;
	}


	cout << ans << endl;
}
