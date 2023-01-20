#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n, x;
	cin >> n >> x;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (i % 2 == 1)
			sum += a - 1;
		else
			sum += a;
	}

	if (x >= sum)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

}