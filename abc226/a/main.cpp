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
	double x;
	cin >> x;

	int ans = 0;

	rep(i, 101)
	{
		if (x < i)
		{
			if (x < i - 0.5)
				ans = i - 1;
			else
				ans = i;
			break;
		}
	}

	cout << ans << endl;
}
