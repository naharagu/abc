#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n, q;
	cin >> n >> q;

	vector<int> e(q);
	vector<int> p(q);
	for (int i = 0; i < q; i++)
	{
		cin >> e[i];
		cin >> p[i];
	}

	vector<int> s(n + 1);
	for (int i = 1; i <= n; i++)
		s[i] = 0;

	for (int i = 0; i < q; i++)
	{
		if (e[i] == 1)
		{
			s[p[i]]++;
		}
		else if (e[i] == 2)
		{
			s[p[i]]+= 2;
			// cout << "now: " << s[e[i][2]] << endl ;
		}
		else if (e[i] == 3)
		{
			if (s[p[i]] >= 2)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
}