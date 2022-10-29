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

int k, n;
vector<int> a(n + 3);
int big = 0;

int main()
{
	cin >> k >> n;

	rep1(i, n)
		cin >> a[i];

	for (int i = 2; i <= n; i++)
	{
		big = max(big, a[i] - a[i - 1]);
	}

	big = max(big, k - a[n] + a[1]);

	cout << k - big << endl;
}
