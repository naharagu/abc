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

	vector<vector<int>> a(h, vector<int>(w));

	rep(i, h)
	{
		rep(j, w)
			cin >> a[i][j];
	}

	rep(i, h)
	{
		for(int x = i + 1; x < h; x++)
		{
			rep(j, w)
			{
				for(int y = j + 1; y < w; y++)
				{
					if (a[i][j] + a[x][y] > a[x][j] + a[i][y])
					{
						cout << "No" << endl;
						return 0;
					}
				}
			}
		}
	}

	cout << "Yes" << endl;
}
