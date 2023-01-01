#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int s, t;
	cin >> s >> t;

	int ans = 0;

	for (int i = 0; i <= 100; i++)
	{
		for (int j = 0; j <= 100; j++)
		{
			for (int k = 0; k <= 100; k++)
			{
				if (i + j + k <= s && i * j * k <= t)
					ans++;
			}
		}
	}

	cout << ans << endl;
}