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

	Graph a(n)(m);
	rep1(i, n)
	{
		rep1(j, m)
			cin >> a[i][j];
	}

	rep1(i, n)
	{
		
	}

	cout << ans << endl;
}
