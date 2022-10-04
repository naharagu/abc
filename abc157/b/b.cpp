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
	vector<vector<int>> a(3, vector<int>(3));
	rep(i, 3)
	{
		rep(j, 3)
			cin >> a[i][j];
	}

	int n;
	cin >> n;

	vector<int> b(n);
	rep(i, n)
	{
		cin >> b[i];
		rep(x, 3)
		{
			rep(y, 3)
			{
				if (b[i] == a[x][y])
					a[x][y] = 'g';
			}
		}
	}

	bool ans = false;

	rep(x, 3)
	{
		int count = 0;
		rep(y, 3)
			if (a[x][y] == 'g')
				count++;
		if (count == 3)
			ans = true;
	}
	rep(y, 3)
	{
		int count = 0;
		rep(x, 3)
			if (a[x][y] == 'g')
				count++;
		if (count == 3)
			ans = true;
	}
	if (a[0][0] == 'g' && a[1][1] == 'g' && a[2][2] == 'g')
		ans = true;
	if (a[2][0] == 'g' && a[1][1] == 'g' && a[0][2] == 'g')
		ans = true;

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
