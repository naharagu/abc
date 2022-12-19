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

	vector<int> count(n + 1);

	for (int i = 1; i <= n - 1; i++)
	{
		int a, b;
		cin >> a >> b;

		count[a]++;
		count[b]++;
	}

	for (int i = 1; i <= n; i++)
	{
		if (count[i] == n - 1)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
}
