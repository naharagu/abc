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
	cin >> a >> b >> c >> d;

	double takahashi = a * 60 + b;
	double aoki = c * 60 + d + 0.1;

	if (takahashi < aoki)
		cout << "Takahashi" << endl;
	else
		cout << "Aoki" << endl;
}
