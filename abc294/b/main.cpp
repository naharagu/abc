#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int h, w;
	cin >> h >> w;

	vector<vector<int>> a(h, vector<int>(w));

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			cin >> a[i][j];
	}
	// for (int i = 0; i < h; i++)
	// {
	// 	for (int j = 0; j < w; j++)
	// 	{
	// 		cout << a[i][j];
	// 		if (j == w - 1)
	// 			cout << endl;
	// 	}
	// }

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (a[i][j] == 0)
				cout << '.';
			else
			{
				char c = 'A' + a[i][j] - 1;
				cout << c;
			}

			if (j == w - 1)
				cout << endl;
		}
	}

}