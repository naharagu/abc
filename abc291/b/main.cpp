#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;
	int len = 5 * n;

	vector<int> x(len);
	for (int i = 0; i < len; i++)
		cin >> x[i];

	sort(x.begin(), x.end());
	for (int i = len - n; i < len; i++)
	int j = 0;
	while (j < n)
	{
		x.erase(len - n);
		j++;
	}
	j = 0;
	while (j < n)
	{
		x.erase(0);
		j++;
	}

	double ans = 0;

	for (int i = 0; i < ; i++)
		ans += x[i];

	ans /= (len - n);
	cout << ans << endl;
}