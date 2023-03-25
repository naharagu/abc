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
	int count_even = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] % 2 == 0)
			count_even++;
	}

	int ans = 1;
	for (int i = 0; i < n; i++)
		ans *= 3;
	int deduction = 1;
	for (int i = 0; i < count_even; i++)
		deduction *= 2;
	cout << ans - deduction << endl;
}