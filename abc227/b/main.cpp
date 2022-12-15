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

	vector<int> s(n);
	rep(i, n)
		cin >> s[i];

	int ans = 0;

	rep(i, n)
	{
		bool flag = false;

		rep1(a, 1000)
		{
			rep1(b, 1000)
			{
				int sum = 4 * a * b + 3 * (a + b);
				if (sum == s[i])
					flag = true;
			}
		}

		if (!flag)
			ans++;
	}
	cout << ans << endl;
}
