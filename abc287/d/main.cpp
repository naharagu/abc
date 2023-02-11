#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;


bool check_match(string s, string t, int len_s, map<int, int> map)
{
	for (int i = 0; i < len_s; i++)
	{
		if (map[i])
			continue;
		else if (t[i] == '?')
		{
			map[i] = 1;
			continue;
		}
		else if (s[i] == '?')
			continue;
		else if (s[i] != t[i])
			return false;
	}

	return true;
}

int main()
{
	string s, t;
	cin >> s >> t;

	int len_s = s.size();
	int len_t = t.size();

	map<int, int> map;
	for (int i = 0; i <= len_t; i++)
	{
		string tmp = s.substr(0, i) + s.substr(len_s - (len_t - i), len_t - i);

		// for (int j = 0; j < len_t; j++)
		// {
		// 	if (t[j] == '?')
		// 		cout << "Yes" << endl;

			if (check_match(tmp, t, len_s, map))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		// }
	}
}