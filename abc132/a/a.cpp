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

	if (s[0] == s[1])
	{
		if (s[2] == s[3] && s[1] != s[2])
			ans = 1;
	}
	else if (s[0] == s[2])
	{
		if (s[1] == s[3] && s[1] != s[2])
			ans = 1;
	}
	else if (s[0] == s[3])
	{
		if (s[1] == s[2] && s[1] != s[0])
			ans = 1;
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
