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

	map<int, int> map;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		for (int j = 0; j < k; j++) {
			int a;
			cin >> a;
			map[a]++;
			// cout << a << " " << map[a] << endl;
		}
	}
	int ans = 0;
	for (int i = 1; i <= m; i++) {
		// cout << map[i] << endl;
		if (map[i] == n) {
			ans++;
		}
	}

	cout << ans << endl;
}
