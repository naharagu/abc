#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n = 0;
	cin >> n;
	string s;
	cin >> s;

	for (int i = 1; i < n; i++)
	{
		if (s[i] == s[i - 1])
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}