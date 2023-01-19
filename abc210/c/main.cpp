#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> c(n);

	for (int i = 0; i < n; i++)
		cin >> c[i];

	map<int, int> cnt;
	int kinds = 0;
	int ans = 0;

	for (int i = 0; i < k; i++)
	{
		if (cnt[c[i]] == 0)
			kinds++;
		cnt[c[i]]++;
	}
	ans = max(ans, kinds);

	for (int i = k; i < n; i++)
	{
		
	}

	cout << ans << endl;
}