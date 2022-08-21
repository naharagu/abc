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
	int x, y, n;
	cin >> x >> y >> n;

	int ans = 0;

	if (3 * x < y)
		ans =  n * x;
	else
		ans =  (n / 3) * y + (n % 3) * x;

	cout << ans << endl;
}
