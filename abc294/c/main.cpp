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
	vector<int> c(n + m);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		c[i] = a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
		c[n + i] = b[i];
	}


	sort(c.begin(), c.end());
	// for (int i = 0; i < n + m; i++)
	// 	cout << c[i] << ' ';

	for (int i = 0; i < n; i++)
	{
		cout << lower_bound(c.begin(), c.end(), a[i]) - c.begin() + 1;
		if (i != n - 1)
			cout << ' ';
		else
			cout << endl;
	}

	for (int i = 0; i < m; i++)
	{
		cout << lower_bound(c.begin(), c.end(), b[i]) - c.begin() + 1;
		if (i != m - 1)
			cout << ' ';
		else
			cout << endl;
	}

}