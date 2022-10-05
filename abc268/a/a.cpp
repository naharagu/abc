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
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	int ans = 1;

	if (b != a)
		ans++;
	if (c != a && c != b)
		ans++;
	if (d != a && d != b && d != c)
		ans++;
	if (e != a && e != b && e != c && e != d)
		ans++;
		
	cout << ans << endl;
}
