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
	int n, x;
	cin >> n >> x;

	vector <int> l(n);
	rep(i, n)
		cin >> l[i];

	int thre = 0;
	int ans = 1;

	rep(i, n)
	{
		thre += l[i];
		if (thre <= x)
			ans++;
		else
			break;
	}

	cout << ans << endl;
}
