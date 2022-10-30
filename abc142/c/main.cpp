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

	vector<int> a(n + 1);
	vector<int> x(n + 1);

	rep1(i, n)
		cin >> a[i];

	rep1(i, n)
	{
		x[a[i]] = i;
	}

	rep1(i, n)
	{
		cout << x[i];
		if (i != n)
			cout << ' ';
		else
			cout << endl;
	}
}
