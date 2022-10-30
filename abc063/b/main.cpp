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

	int len = s.size();
	bool ans = true;

	rep(i, len)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (s[i] == s[j])
				ans = false;
		}
	}

	if (ans)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}
