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
	string s, t;
	cin >> s >> t;

	bool ans = false;
	int n = s.size();

	rep(i, n)
	{
		if (s == t)
			ans = true;
		s = s.substr(n - 1) + s.substr(0, n - 1);
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
