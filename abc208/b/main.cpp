#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{

	int fac[11];
	fac[0] = 1;
	for (int i = 1; i <= 10; i++)
		fac[i] = fac[i - 1] * i;

	int p;
	cin >> p;
	int ans = 0;

	for (int i = 10; i >= 1; i--)
	{
		while (p >= fac[i])
		{
			ans++;
			p -= fac[i];
		}
	}

	cout << ans << endl;
}