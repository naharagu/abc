#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n, a, b;
	cin >> n >> a >> b;

	vector<int> c(n);
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
	}

	int sum = a + b;
	for (int i = 0; i < n; i++)
	{
		if (c[i] == sum)
		{
			cout << i + 1 << endl;
			break;
		}
	}
}