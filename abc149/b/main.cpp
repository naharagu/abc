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
	ll a, b, k;
	cin >> a >> b >> k;

	if (a >= k)
		a = a - k;
	else if (a < k && a + b > k)
	{
		b = a + b - k;
		a = 0;
	}
	else
	{
		a = 0;
		b = 0;
	}

	cout << a << " " << b << endl;
}
