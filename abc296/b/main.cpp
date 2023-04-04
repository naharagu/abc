#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

string find_piece(const vector<string> &grid)
{
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (grid[i][j] == '*')
			{
				return string(1, 'a' + j) + to_string(8 - i);
			}
		}
	}
	return "";
}

int main()
{
	vector<string> grid(8);
	for (int i = 0; i < 8; ++i)
	{
		cin >> grid[i];
	}

	string square_name = find_piece(grid);
	cout << square_name << endl;

	return 0;
}