#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	int ans = 0;

	if (n <= 125)
		ans = 4;
	else if (126 <= n && n <= 211)
		ans = 6;
	else
		ans = 8;
		
	cout << ans << endl;
}