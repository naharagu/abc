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
	vector<int> h(n);

	int ans = 0;
	int high = 0;

	rep(i, n)
	{
		cin >> h[i];
		if (h[i] > high)
		{
			high = h[i];
			ans = i;
		}
	}

	cout << ans + 1 << endl;
}
