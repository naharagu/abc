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
	ll n, t;
	cin >> n >> t;

	vector<ll> a(n);
	ll sum = 0;
	rep(i, n)
	{
		cin >> a[i];
		sum += a[i];
	}

	ll ans = 0;
	t = t % sum;
	
	rep(i, n)
	{
		ans += a[i];
		if (ans > t)
		{
			cout << i + 1 << ' ' << a[i] - (ans - t) << endl;
			break;
		}
	}

	// int i = 0;
	// while (i < n)
	// {
	// 	ans += a[i];
	// 	if (ans > t)
	// 	{
	// 		cout << i + 1 << ' ' << a[i] - (ans - t) << endl;
	// 		break;
	// 	}
	// 	i++;
	// 	if (i == n)
	// 		i = 0;
	// }

}
