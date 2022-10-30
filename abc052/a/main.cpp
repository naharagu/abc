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
	int a, b, c, d;
	cin >> a  >> b >> c >> d;

	int ans1 = a * b;
	int ans2 = c * d;

	if (ans1 == ans2)
		cout << ans1 << endl;
	else if (ans1 > ans2)
		cout << ans1 << endl;
	else
		cout << ans2 << endl;
}
