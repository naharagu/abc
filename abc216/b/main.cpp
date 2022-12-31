#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	map<string, int> m;

	int n;
	cin >> n;

	string t1, t2, s;
	bool ans = false;
	for (int i = 0; i < n; i++)
	{
		cin >> t1 >> t2;
		s = t1 + t2;
		m[s]++;
		if (m[s] > 1)
		 	ans = true;
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}