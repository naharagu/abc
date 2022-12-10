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

	int ans = 0;

	for (int i = 0; i < h; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < w; j++)
		{
			if (s[j] == '#')
				ans++;
		}
	}

	cout << ans << endl;
}
