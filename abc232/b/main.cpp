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

	int len = s.size();
	vector<int> a(len);

	rep(i, len)
	{
		int diff = t[i] - s[i];

		if (diff > 0)
			a[i] = diff;
		else
			a[i] = diff + 26;
	}

	bool ans = true;

	rep(i, len - 1)
	{
		if (a[i] != a[i + 1])
			ans = false;
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

}
