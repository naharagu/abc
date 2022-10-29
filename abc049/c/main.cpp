#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)

int main()
{
	string s;
	cin >> s;
	reverse(s.begin(), s.end());

	string t[4] = {"dream", "dreamer", "erase", "eraser"};
	rep (i, 4)
		reverse(t[i].begin(), t[i].end());

	bool flag = true;
	rep (i, s.size())
	{
		bool is_t = false;
		rep (j, 4)
		{
			string part = t[j];
			if (s.substr(i, part.size()) == part)
			{
				is_t = true;
				i += part.size();
			}
		}
		if (!is_t)
		{
			flag = false;
			break;
		}
	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
