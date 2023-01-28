#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	ll a, b, c, d;
	cin >> a  >> b >> c >> d;

	ll i = 1;
	ll blue = a;
	ll red = 0;
	while(i <= a)
	{
		blue += b;
		red += c;
		if (blue <= red * d)
		{
			cout << i << endl;
			return 0;
		}
		i++;
	}
	cout << -1 << endl;
	return 0;
}