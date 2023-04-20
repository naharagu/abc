#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n + 1);
	for (int i = 1; i <= n; ++i)
		cin >> a[i];

	int current_value = 1;
	for (int i = 1; i <= n; ++i)
	{
		current_value = a[current_value];
		if (current_value == 2)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}
