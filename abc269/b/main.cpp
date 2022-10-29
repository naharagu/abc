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
	vector<string> s(10);

	for (int i = 0; i < 10; i++)
		cin >> s[i];

	int a = INT_MAX;
	int b = -1;
	int c = INT_MAX;
	int d = -1;

	rep(x, 10)
	{
		rep(y, 10)
		{
			if (s[x][y] == '#')
			{
				a = min(a, x + 1);
				b = max(b, x + 1);
				c = min(c, y + 1);
				d = max(d, y + 1);
			}
		}
	}

	cout << a << " " << b << endl;
	cout << c << " " << d << endl;
}
