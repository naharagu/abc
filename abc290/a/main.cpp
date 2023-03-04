#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> a(n);
	vector<int> b(m);

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];

	int ans = 0;
	for (int i = 0; i < m; i++)
	{
		ans += a[b[i] - 1];
	}
	cout << ans << endl;
}