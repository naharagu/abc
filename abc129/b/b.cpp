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

	vector<int> w(n);
	for (int i = 0; i < n; i++)
		cin >> w[i];

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += w[i];

	int ans = INT_MAX;
	int left_sum = 0;
	int diff = 0;
	for (int i = 0; i < n - 1; i++)
	{
			left_sum += w[i];
			diff = abs((sum - left_sum) - left_sum);
			if (ans > diff)
				ans = diff;
	}

	cout << ans << endl;
}
