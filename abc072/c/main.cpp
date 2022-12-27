#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;
	vector<int> a(100002);
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a[x]++;
		a[x + 1]++;
		a[x + 2]++;
	}

	for (int i = 1; i < 100002; i++)
	{
		if (a[i] > ans)
			ans = a[i];
	}
	
	cout << ans << endl;
}