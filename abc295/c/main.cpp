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

	unordered_map<int, int> count;
	for (int color : a)
		count[color]++;

	int ans = 0;
	for (auto &socks : count)
		ans += socks.second / 2;

	cout << ans << endl;
}