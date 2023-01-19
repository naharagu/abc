#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n, a, x, y;
	cin >> n >> a >> x >> y;

	int ans = 0;

	if (n > a)
	{
		ans += y * (n - a);
		ans += x * a;
	}
	else
		ans = x * n;

	cout << ans << endl;
}