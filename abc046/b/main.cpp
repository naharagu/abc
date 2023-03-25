#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	ll n, k;
	cin >> n >> k;

	ll ans = k;
	n--;
	while (n--) {
		ans *= (k - 1);
	}
	cout << ans << endl;
}