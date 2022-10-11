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

	char s[h][w];
	int good_h[2];
	int good_w[2];
	int count = 0;

	rep(i, h)
	{
		rep(j, w)
		{
			cin >> s[i][j];

			if (s[i][j] == 'o')
			{
				good_h[count] = i;
				good_w[count] = j;
				count++;
			}
		}
	}

	int ans = abs(good_h[1] - good_h[0]) + abs(good_w[0] - good_w[1]);
	cout << ans << endl;
}
