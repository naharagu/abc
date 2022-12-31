#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	ll n;
	cin >> n;

	int ans = 0;

	while (n)
	{
		n /= 2;
		ans++;
	}

	cout << ans - 1 << endl;
}