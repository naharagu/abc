#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int k = 0;
	vector<int> b(n, 0);

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[k] = a[i];
			k++;
		}
	}
	if (k == n)
	{
		for (int j = 0; j < n; j++)
		{
			if (j != n -1)
			{
				cout << b[j] << ' ';
			}
			else
			{
				cout << b[j] << endl;
			}
		}
	}
	else
	{
	for (int j = 0; j < n - 1; j++)
	{
		cout << b[j];
		if (b[j + 1] != 0)
		{
			cout << ' ';
		}
		else
		{
			cout << endl;
			return 0;
		}

	}
	}
}