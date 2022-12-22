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
	int a, b;
	cin >> a >> b;

	int ans = 0;

	if (a  + b >= 15 && b >= 8)
		ans = 1;
	else if (a + b >= 10 && b >= 3)
		ans = 2;
	else if (a + b >= 3)
		ans = 3;
	else
		ans = 4;

	cout << ans << endl;
}
