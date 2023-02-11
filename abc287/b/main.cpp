#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n, m;
	cin >> n >> m;

	map<string, int> map;

	vector<string> s(n);
	for (int i = 0; i < n; i++)
	{
		string tmp;
		cin >> tmp;

		s[i] = tmp.substr(3, 3);
	}

	for (int i = 0; i < m; i++)
	{
		string t;
		cin >> t;
		map[t]++;
	}

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (map[s[i]])
			ans++;
	}
	cout << ans << endl;

}