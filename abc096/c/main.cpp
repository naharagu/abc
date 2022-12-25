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

	char s[h + 2][w + 2];

	rep1(i, h)
	{
		rep1(j, w)
			cin >> s[i][j];
	}

	int ans = 0;

	rep1(i, h)
	{
		rep1(j, w)
		{
			if (s[i][j] == '#' &&
				s[i][j - 1] != '#' &&
				s[i][j + 1] != '#' &&
				s[i - 1][j] != '#' &&
				s[i + 1][j] != '#')
				ans++;
		}
	}

	if (ans == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
