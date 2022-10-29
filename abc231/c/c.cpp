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
	int n, q;
	cin >> n >> q;

	vector<int> a(n);
	vector<int> x(q);

	rep(i, n)
		cin >> a[i];

	sort(a.begin(), a.end());

	rep(i, q)
	{
		cin >> x[i];
		cout << n - (lower_bound(a.begin(), a.end(), x[i]) - a.begin()) << endl;
	}

}
