#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int h, w;
	cin >> h >> w;

	vector<vector<int>> a(h + 1, vector<int>(w + 1));
	// vector<vector<int>> x(h + 1, vector<int>(w + 1));
	pair<int, set<int>> p[h * w + 1];

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> a[i][j];
			// x[i][j] = 0;
			p[i * w + j].first = 0;
		}
	}
	// x[0][0] = 1;
	p[0].first = 1;
	p[0].second.insert(a[0][0]);

	// if (p[0].second.find(3) == p[0].second.end())
	// 	cout << "no" << endl;
	// else
	// 	cout << "yes" << endl;

	for (int i = 1; i < h; i++)
	{
			cout << a[i][0] << endl;
		if (p[(i - 1) * w].second.find(a[i][0]) != p[(i - 1) * w].second.end())
		{
			cout << "hi!" << endl;
			p[i * w].first = p[(i - 1) * w].first;
			p[i * w].second = p[(i - 1) * w].second;
			p[i * w].second.insert(a[i][0]);
		}
	}
	for (int j = 1; j < w; j++)
	{
		if (p[j].second.find(a[0][j]) != p[j].second.end())
		{
			p[j].first = p[j - 1].first;
			p[j].second.insert(a[0][j]);
		}
	}

	// for (int i = 1; i < h; i++)
	// {
	// 	for (int j = 1; j < w; j++)
	// 	{
	// 		if (x[i - 1][j] != 0 && x[i][j - 1] != 0)
	// 		{
	// 			x[i][j] = x[i - 1][j] + x[i][j - 1];
	// 		}
	// 		else
	// 		{
	// 			x[i][j] += x[i - 1][j];
	// 			x[i][j] += x[i][j - 1];
	// 		}
	// 	}
	// }
	// cout << x[h - 1][w - 1] << endl;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << p[i * w + j].first ;
			if (j == w - 1)
				cout << endl;
			else
				cout << " ";
		}
	}

}