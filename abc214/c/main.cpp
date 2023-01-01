#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	vector<int> s(n);
	vector<int> t(n);
	vector<int> a(n);

	for (int i = 0; i < n; i++)
		cin >> s[i];

	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
		a[i] = t[i];
	}

	for (int i = 1; i < n; i++)
	{
		// cout << "a: " << a[i] << " s: " << s[i] << endl;
		a[i] = min(a[i], a[i - 1] + s[i - 1]);
	}
	a[0] = min(a[0], a[n - 1] + s[n - 1]);

	for (int i = 1; i < n; i++)
	{
		// cout << "a: " << a[i] << " s: " << s[i] << endl;
		a[i] = min(a[i], a[i - 1] + s[i - 1]);
	}
	a[0] = min(a[0], a[n - 1] + s[n - 1]);

	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
}