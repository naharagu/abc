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
	int a, b, c, d, e, f, x;
	cin >> a >> b >> c >>
			d >> e >> f >> x;

	int takahashi = (x / (a + c) * a + min(a, x % (a + c))) * b;
	int aoki = (x / (d + f) * d + min(d, x % (d + f))) * e;

	if (takahashi > aoki)
		cout << "Takahashi" << endl;
	else if (takahashi < aoki)
		cout << "Aoki" << endl;
	else
		cout << "Draw" << endl;
}
