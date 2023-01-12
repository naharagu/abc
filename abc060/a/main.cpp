#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	string a, b, c;
	cin >> a >> b >> c;

	bool ans = true;

	if (a[a.size() - 1] != b[0])
		ans = false;
	if (b[b.size() - 1] != c[0])
		ans = false;

	if (ans)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}