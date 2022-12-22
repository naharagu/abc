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
	int x, y, z;
	cin >> x >> y >> z;

	int ans = -1;

	if ((x > 0 && y > 0 && x < y) || (x < 0 && y < 0 && x > y))
		ans = x;
	else if

	cout << ans << endl;
}
