#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	string s;
	cin >> n >> s;

	int max_level = -1;
	int count_o = 0;
	bool is_minus = false;

	for (int i = 0; i < n; ++i)
	{
		if (s[i] == 'o' && is_minus == true && count_o > 0 && i == n - 1)
		{
			count_o++;
			max_level = max(max_level, count_o);
		}
		else if (s[i] == 'o')
		{
			count_o++;
		}
		else if (s[i] == '-' && count_o > 0)
		{
			if (is_minus)
				is_minus = false;
			else
				max_level = max(max_level, count_o);
			count_o = 0;
		}
		else
		{
			is_minus = true;
			count_o = 0;
		}
		// cout << "i:" << i << " count_o:" << count_o << " max_level:" << max_level << endl;
	}
	cout << max_level << endl;
	return 0;
}
