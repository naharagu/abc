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
	int n, m;
	cin >> n >> m;

	int k[101];
	int x[101][101];

	rep(i, n)
	{
		cin >> k[i];
		rep(j, k[i])
		{
			cin >> x[i][j];
		}
	}

	bool ans = false;

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
