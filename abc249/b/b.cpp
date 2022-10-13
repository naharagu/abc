#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main()
{
	string s;
	cin >> s;

	bool flag_capital = false;
	bool flag_small = false;
	bool flag_perfect = true;

	rep(i, s.size())
	{
		if ('a' <= s[i] && s[i] <= 'z')
			flag_small = true;
		if ('A' <= s[i] && s[i] <= 'Z')
			flag_capital = true;
		for (int j = i - 1; j >= 0; j--)
		{
			if (s[j] == s[i])
				flag_perfect = false;
		}
	}
	if (flag_capital && flag_small && flag_perfect)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
