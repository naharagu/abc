#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s == "For")
			ans++;
	}

	if (ans > n / 2)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}