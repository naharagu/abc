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

	char map[h][w];

	rep (i, h)
	{
		rep (j, w)
			cin >> map[i][j];
	}


	rep (i, h)
	{
		rep (j, w)
		{
			int count = 0;
			if (map[i][j] = '.';
			{
				if ()
			}
		}
	}

	rep (i, h)
	{
		rep (j, w)
			cout << map[i][j];
		cout << endl;
	}
}
