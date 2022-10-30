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
	int a, b;
	string s;
	cin >> a >> b >> s;

	int len = a + b + 1;

	bool ans = true;

	rep(i, len)
	{
		if (i == a)
		{
			if (s[i] != '-')
				ans = false;
		}
		else
		{
			if (!('0' <= s[i] && s[i] <= '9'))
				ans = false;
		}
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
