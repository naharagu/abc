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
	int n;
	string t;
	cin >> n >> t;

	int x = 0;
	int y = 0;
	int len = t.size();
	int direct = 1;

	for (int i = 0; i < len; i++)
	{
		if (t[i] == 'R')
		{
			if (direct == 4)
				direct = 1;
			else
				direct++;
		}
		else
		{
			if (direct == 1)
				x++;
			else if (direct == 2)
				y--;
			else if (direct == 3)
				x--;
			else
				y++;
		}
	}

	cout << x << " " << y << endl;
}
