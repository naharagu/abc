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

	int big = 0;
	int sum = 0;
	vector<int> p(n);
	rep(i, n)
	{
		cin >> p[i];
		sum += p[i];
		big = max(big, p[i]);
	}

	int ans = sum - big / 2;

	cout << ans << endl;
}
