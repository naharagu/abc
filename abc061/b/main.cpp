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
	cin >> n >> m;

	map<int, int> mp;
	rep(i, m)
	{
		int a;
		int b;
		cin >> a >> b;
		mp[a]++;
		mp[b]++;
	}

	rep1(i, n)
		cout << mp[i] << endl;
}
