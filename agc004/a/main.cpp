#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	ll a, b, c;
	cin >> a  >> b >> c;

	if (a % 2 == 0 ||
		b % 2 == 0 ||
		c % 2 == 0) {
			cout << 0 << endl;
			return 0;
		}
	cout << min(a * b, min(b * c, c * a)) << endl;
}