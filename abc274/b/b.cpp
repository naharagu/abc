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
	int h, w;
	cin >> h >> w;

	vector<vector<char>> c(h, vector<char>(w));
	vector<int> x(w);

	rep(i, h)
	{
		rep(j, w)
		{
			cin >> c[i][j];
			if (c[i][j] == '#')
			{
				x[j]++;
			}
		}
	}

	rep(j, w)
	{
		cout << x[j];
		if (j != w - 1)
			cout << ' ';
		else
			cout << endl;
	}

}
