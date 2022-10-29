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
	vector<string> s(9);
	rep(i, 9)
		cin >> s[i];

	int ans = 0;

	rep(i, 8)
	{
		rep(j, 8)
		{
			for(int x = 1; x < 9 - i && x < 9 - j; x++)
				{
					if (s[i][j] == '#' && s[i + x][j] == '#' && s[i][j + x] == '#' && s[i + x][j + x] == '#')
						ans++;
					if (i - x > -1 && i + x < 9 && j + x > -1 && j - x < 9 && j + 2 * x < 9)
					{
						if (s[i][j] == '#' && s[i - x][j + x] == '#' && s[i + x][j + x] == '#' && s[i][j + 2 * x] == '#')
							ans++;
					}
					for (int y = 1; y < 9 - i && y < 9 - j; y++)
					{
						if (i - x > -1 && j + x > -1 && j + x + y < 9)
						{
							if (s[i][j] == '#' && s[i - x][j + y] == '#' && s[i + y][j + x] == '#' && s[i + x][j + x + y] == '#' && x != y)
							{
								ans++;
							}
						}
					}
				}
		}
	}

	cout << ans << endl;
}
