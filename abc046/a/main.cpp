#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int a, b, c;
	cin >> a  >> b >> c;

	int ans = 1;
	if (b != a) {
		ans++;
	}
	if (c != a && c != b) {
		ans++;
	}
	cout << ans << endl;
}