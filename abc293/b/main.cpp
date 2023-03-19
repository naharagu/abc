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
	vector<bool> b(n + 1);
	for (int i = 1; i < n + 1; i++)
	{
		cin >> a[i];
		b[i] = false;
	}

	for (int i = 1; i < n + 1; i++)
	{
		if (b[i] == false)
			b[a[i]] = true;
	}

	int k = 0;
	for (int i = 1; i < n + 1; i++)
	{
		if (b[i] == false)
			k++;
	}
	cout << k << endl;
	for (int i = 1; i < n + 1; i++)
	{
		if (b[i] == false)
		{
			cout << i;
			k--;
			if (k == 0)
				cout << endl;
			else
				cout << ' ';
		}
	}
}