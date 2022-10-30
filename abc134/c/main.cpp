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
	vector<int> b(n);

	rep(i, n)
	{
		cin >> a[i];
		b[i] = a[i];
	}

	sort(b.begin(), b.end());

	int big1 = b[n - 1];
	int big2 = b[n - 2];

	rep(i, n)
	{
		if (a[i] == big1)
			cout << big2 << endl;
		else
			cout << big1 << endl;
	}
}
