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
	string s;
	cin >> s;
	int ans = 0;

	int len = s.size();
	rep(i, len - 2)
	{
		if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
			ans++;
	}
	cout << ans << endl;
}
