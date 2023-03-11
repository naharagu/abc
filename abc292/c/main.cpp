#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	ll ans = 0;
	unordered_map<int, int> m;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			m[i * j] = 1;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i * j == target)
			{
				cout << "ans: " << i << ' ' << j << endl;
				ans++;
			}
		}
	}
	
	cout << ans * 2 << endl;
}