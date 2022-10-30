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
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int dx = x2 - x1;
	int dy = y2 - y1;
	int a = x2;
	int b = y2;

	for (int i = 0; i < 2; i++)
	{
		int zx = -dy;
		int zy = dx;
		dx = zx;
		dy = zy;

		a = a + dx;
		b = b + dy;

		cout << a << " " << b;
		if (i == 0)
			cout << " ";
		else
			cout << endl;
	}
}
