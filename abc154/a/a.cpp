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
	string s, t;
	cin >> s >> t;

	int a, b;
	cin >> a >> b;

	string u;
	cin >> u;

	if (s == u)
		cout << a - 1 << " " << b << endl;
	else
		cout << a << " " << b - 1 << endl;
}
