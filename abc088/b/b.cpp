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
	int n;
	cin >> n;
	vector<int> a(n);
	rep (i, n)
		cin >> a[i];

	sort(a.begin(), a.end(), greater<int>());
	int alice = 0;
	int bob = 0;
	rep (i, n)
	{
		if (i % 2 == 0)
			alice += a[i];
		else
			bob += a[i];
	}
	cout << alice - bob << endl;
}
