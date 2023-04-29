#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

bool check_cross(const vector<string> &c, int a, int b, int n)
{
	if (c[a][b] != '#')
		return false;
	for (int d = 1; d <= n; d++)
	{
		if (c[a + d][b + d] != '#' || c[a + d][b - d] != '#' ||
			c[a - d][b + d] != '#' || c[a - d][b - d] != '#')
		{
			return false;
		}
	}
	return (c[a + n + 1][b + n + 1] == '.' || c[a + n + 1][b - n - 1] == '.' ||
			c[a - n - 1][b + n + 1] == '.' || c[a - n - 1][b - n - 1] == '.');
}

int main()
{
	int h, w;
	cin >> h >> w;
	vector<string> c(h + 2, string(w + 2, '.'));
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; ++j)
			cin >> c[i][j];
	}

	// for (int i = 1; i <= h; i++)
	// {
	// 	for (int j = 1; j <= w; ++j)
	// 	{
	// 		cout << c[i][j];
	// 		if (j == w - 1)
	// 			cout << endl;
	// 	}
	// }

	int n = min(h, w);
	vector<int> s(n + 1, 0);
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			for (int k = 1; k <= n; k++)
			{
				if (check_cross(c, i, j, k))
				{
					s[k]++;
				}
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << s[i];
		if (i == n)
			cout << endl;
		else
			cout << " ";
	}
}
