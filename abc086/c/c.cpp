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
	int t[100001];
	int x[100001];
	int y[100001];

	rep1 (i, n)
		cin >> t[i] >> x[i] >> y[i];

	bool flag = true;
	rep (i, n)
	{
		int dt = t[i + 1] - t[i];
		int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
		if (dt < dist)
			flag = false;
		else if (dist % 2 != dt % 2)
			flag = false;
	}
	if (flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
