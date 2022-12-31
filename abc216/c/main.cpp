#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	ll n;
	cin >> n;

	string ans = "";

	while (n >= 1)
	{
		if (n % 2 == 1)
		{
			ans += "A";
			n--;
		}
		else
		{
			ans += "B";
			n /= 2;
		}
	}
	reverse(ans.begin(), ans.end());

	cout << ans << endl;
}