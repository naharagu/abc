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

	vector<int> x(n);
	rep(i, n)
		cin >> x[i];

	int sum = 0;
	int min = INT_MAX;
	int ans = 0;

	for (int i = 1; i < 101; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += (x[j] - i) * (x[j] - i);
		}
		if (sum < min)
		{
			min = sum;
			ans = i;
		}
		sum = 0;
	}

	int res = 0;
	for (int i = 0; i < n; i++)
	{
		res += (x[i] - ans) * (x[i] - ans);
	}
	cout << res << endl;
}
