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
	int y;
	cin >> y;

	int ans = 0;
	if (y % 4 == 0)
		ans = y + 2;
	else if (y % 4 == 1)
		ans = y + 1;
	else if (y % 4 == 2)
		ans = y;
	else if (y % 4 == 3)
		ans = y + 3;

	cout << ans << endl;
}
