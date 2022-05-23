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
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	vector<int> b(k);

	int max = 0;
	rep (i, n)
	{
		cin >> a[i];
		if (a[i] >= max)
			max = a[i];
	}
	rep (i, k)
	{
		cin >> b[i];
		if (a[b[i] - 1] == max)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
