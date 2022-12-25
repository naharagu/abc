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
	char c[2][3];

	rep(i, 2)
	{
		rep(j, 3)
			cin >> c[i][j];
	}

	bool ans = true;

	if (c[0][0] != c[1][2] || c[0][1] != c[1][1] || c[0][2] != c[1][0])
		ans = false;

	if (ans)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
