#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	vector<int> a(3);

	for (int i = 0; i < 3; i++)
		cin >> a[i];

	sort(a.begin(), a.end());

	int ans = a[0] + a[1];

	cout << ans << endl;

}