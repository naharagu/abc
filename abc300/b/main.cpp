#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int h, w;
	cin >> h >> w;

	vector<string> a(h), b(h);
	for (int i = 0; i < h; i++)
		cin >> a[i];
	for (int i = 0; i < h; i++)
		cin >> b[i];

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			bool match = true;
			for (int y = 0; y < h; y++)
			{
				for (int x = 0; x < w; x++)
				{
					if (a[y][x] != b[(y + i) % h][(x + j) % w])
					{
						match = false;
						break;
					}
				}
				if (!match)
					break;
			}
			if (match)
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
}