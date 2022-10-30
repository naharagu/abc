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

	bool ans = true;
	int len = s.size();

	for (int i = 0; i < len; i++)
	{
		if (i % 2)
		{
			if (s[i] != 'i')
				ans = false;
		}
		else
		{
			if (s[i] != 'h')
				ans = false;
		}
	}

	if (len % 2)
		ans = false;

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
