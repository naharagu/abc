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
	int dir;
	double w;

	cin >> dir >> w;

	double power = round(w / 60 * 10) / 10;

	if (power <= 0.2)
	{
		cout << "C 0" << endl;
		return 0;
	}

	dir = ((dir * 10 + 1125) / 2250) % 16;
	string  dis[16] = {"N","NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};
	cout << dis[dir] << ' ';

	int ans = 0;
	if (power <= 1.5)
		ans = 1;
	else if (power <= 3.3)
		ans = 2;
	else if (power <= 5.4)
		ans = 3;
	else if (power <= 7.9)
		ans = 4;
	else if (power <= 10.7)
		ans = 5;
	else if (power <= 13.8)
		ans = 6;
	else if (power <= 17.1)
		ans = 7;
	else if (power <= 20.7)
		ans = 8;
	else if (power <= 24.4)
		ans = 9;
	else if (power <= 28.4)
		ans = 10;
	else if (power <= 32.6)
		ans = 11;
	else if (power >= 32.7)
		ans = 12;

	cout << ans << endl;
}
