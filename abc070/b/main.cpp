#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int a, b, c, d;
	cin >> a  >> b >> c >> d;

	int ans = max(0, min(b, d) - max(a, c));
	cout << ans << endl;
}