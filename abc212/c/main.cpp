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
	vector<int> b(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int ans = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		int j = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
		if (j < m)
			ans = min(ans, abs(a[i] - b[j]));
		if (j > 0)
			ans = min(ans, abs(a[i] - b[j - 1]));
	}

	cout << ans << endl;
}