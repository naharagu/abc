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
	vector<int> n(5);
	rep(i, 5)
		cin >> n[i];

	vector<int> time(5);
	rep(i, 5)
		time[i] = (10 - n[i] % 10) % 10;

	int ans = 0;
	int max = *max_element(time.begin(), time.end());
	rep(i, 5)
		ans += n[i] + time[i];

	cout << ans - max << endl;
}
