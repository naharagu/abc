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

	vector<string> a(h);

	rep(i, h)
		cin >> a[i];

	vector<bool> row(h, false);
	vector<bool> column(w, false);

	rep(i, h)
	{
		rep(j, w)
		{
			if (a[i][j] == '#')
			{
				row[i] = true;
				column[j] = true;
			}
		}
	}

	rep(i, h)
	{
		if (row[i])
		{
			rep(j, w)
			{
				if (column[j])
					cout << a[i][j];
			}
			cout << endl;
		}
	}
}
