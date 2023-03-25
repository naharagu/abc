#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;


int main()
{
	int r,c;
	cin >> r >> c;

	vector<vector<char>> b(r, vector<char>(c));
	vector<vector<char>> d(r, vector<char>(c));
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> b[i][j];
			d[i][j] = b[i][j];
		}
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if ('1' <= b[i][j] && b[i][j] <= '9')
			{
				int power = b[i][j] - '0';
				for (int x = 0; x < r; x++)
				{
					for (int y = 0; y < c; y++)
					{
						int distance = abs(x - i) + abs(y	 - j);
						if (distance <= power)
						{
							d[x][y] = '.';
						}
					}
				}
			}
		}
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout <<  d[i][j];
			if (j == c - 1)
				cout << endl;
		}
	}

}