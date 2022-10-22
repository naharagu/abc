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


ll distance(int x1, int y1, int x2, int y2)
{
	return (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
}

int main()
{
	ll x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	for (int i = x1 - 2; i <= x1 + 2; i++)
	{
		for (int j = y1 - 2; j <= y1 + 2; j++)
		{
			if (distance(x1, y1, i, j) == 5 && distance(x2, y2, i, j) == 5)
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
}
