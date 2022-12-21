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
	double m;
	cin >> m;
	m /= 1000;

	int ans;

	if (m < 0.1)
		ans = 0;
	else if (m <= 5)
		ans = m * 10;
	else if (m <= 30)
		ans = m + 50;
	else if (m <= 70)
		ans = (m - 30) / 5 + 80;
	else
		ans = 89;

	if (ans < 10)
		cout << '0';
	cout << ans << endl;
}
