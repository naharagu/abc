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
	int ans = 0;
	string s, a, b;

	cin >> s;
	a = b = "";

	for (auto c : s)
	{
		if ((b += c) != a)
		{
			ans++;
			a = b;
			b = "";
		}
	}

	cout << ans << endl;
}
