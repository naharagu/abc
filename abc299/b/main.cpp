#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n, t;
	cin >> n >> t;

	vector<int> colors(n);
	vector<int> ranks(n);
	for (int i = 0; i < n; ++i)
		cin >> colors[i];
	for (int i = 0; i < n; ++i)
		cin >> ranks[i];

	int max_rank_color_t = -1;
	int max_rank_color_first_player = -1;
	int winner_color_t = -1;
	int winner_color_first_player = -1;

	for (int i = 0; i < n; ++i)
	{
		// cout << "colors[i]: " << colors[i] << endl;
		// cout << "ranks[i]: " << ranks[i] << endl;

		if (colors[i] == t && ranks[i] > max_rank_color_t)
		{
			max_rank_color_t = ranks[i];
			winner_color_t = i;
		}
		if (colors[i] == colors[0] && ranks[i] > max_rank_color_first_player)
		{
			max_rank_color_first_player = ranks[i];
			winner_color_first_player = i;
		}
	}
	// cout << "max_rank_color_t: " << max_rank_color_t << endl;
	// cout << "max_rank_color_first_player: " << max_rank_color_first_player << endl;

	if (max_rank_color_t != -1)
	{
		cout << winner_color_t + 1 << endl;
	}
	else
	{
		cout << winner_color_first_player + 1 << endl;
	}
	return 0;
}
