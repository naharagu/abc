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

	int ans = 0;
	int cnt = 0;
	bool flag = false;
	int len = s.size();

	// int i = 1;
	// while (i < len)
	// {
	// 	ans++;
	// 	cout << i << ' ' << ans << endl;
	// 	if (s[i - 1] == '0' && s[i] == '0')
	// 		i = i + 2;
	// 	else
	// 		i++;
	// }

	for (int i = 0; i < len; i++)
	{
		// cout << i << ' ' << ans << endl;
		if (s[i] == '0' && s[i + 1] == '0')
		{
			cnt++;
			flag = true;
		}
		else if (flag && s[i + 1] != '0')
		{
			cnt++;
			if (cnt % 2 == 0)
				ans += cnt / 2;
			else
				ans += cnt / 2 + 1;
			flag = false;
			cnt = 0;
		}
		else
		{
			flag = false;
			cnt = 0;
			ans++;
		}
	}

	cout << ans << endl;
}
