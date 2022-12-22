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
	int n;
	cin >> n;

	map<string, int> m;

	rep(i, n)
	{
		string s;
		cin >> s;
		if (s[0] == 'M' ||
			s[0] == 'A' ||
			s[0] == 'R' ||
			s[0] == 'C' ||
			s[0] == 'H')
			map[s]++;
	}

	int ans = map.size();
	ans = ans * (ans - 1) / 2;

	cout << ans << endl;
}
