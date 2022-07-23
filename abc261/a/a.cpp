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
	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;

	int ans = 0;
	if (r1 <= l2 || l1 >= r2 || l1 == r1 || l2 == r2)
		ans = 0;
	else if (l1 <= l2 && r1 >= r2)
		ans = r2 - l2;
	else if (l1 >= l2 && r1 <= r2)
		ans = r1 - l1;
	else if (r1 >= l2 && l1 <= l2)
		ans = r1 - l2;
	else if (r1 >= r2 && l1 <= r2)
		ans = r2 - l1;

	cout << ans << endl;
}
