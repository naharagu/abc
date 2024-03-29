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
	rep(i, n)
		cin >> h[i];

	int ans = 0;
	vector<bool> checked(n, false);

	rep(i, n - 1)
	{
		if (!checked[i])
		{
			checked[i] = true;
			for (int j = i + 1; j < n; j++)
			{
				if (h[j - 1] < h[j])
					break;
				checked[j] = true;
				ans = max(ans, j - i);
			}
		}
	}

	cout << ans << endl;
}
