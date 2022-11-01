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

	map<string, int> m;
	int big = 0;
	rep(i, n)
	{
		string s;
		cin >> s;

		m[s]++;
		big = max(big, m[s]);
	}

	for (auto p : m)
	{
		if (p.second == big)
			cout << p.first << endl;
	}

}
