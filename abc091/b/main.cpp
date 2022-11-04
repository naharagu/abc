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
	int n, m;
	cin >> n;
	map<string, int> mp;

	int max_revenue = 0;
	int min_cost = INT_MAX;

	rep(i, n)
	{
		string s;
		cin >> s;
		mp[s]++;
		if (mp[s] > max_revenue)
			max_revenue = mp[s];
	}
	cin >> m;
	rep(i, m)
	{
		string t;
		cin >> t;
		mp[t]++;
		if (mp[t] < min_cost)
			min_cost = mp[t];
	}

	int ans = max_revenue - min_cost;

	cout << ans << endl;
}
