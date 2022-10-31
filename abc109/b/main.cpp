#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main()
{
	int n;
	cin >> n;
	vector<string> w(n);
	for (int i = 0; i < n; i++)
		cin >> w[i];

	bool ans = true;
	map<string, int> mp;

	for (int i = 0; i < n; i++)
	{
		mp[w[i]]++;
		if (i != 0)
		{
			if (w[i][0] != w[i - 1].back())
			{
				ans = false;
				break;
			}
		}
		if (mp[w[i]] > 1)
		{
			ans = false;
			break;
		}
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
