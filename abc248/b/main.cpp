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
	int a, b, k;
	cin >> a >> b >> k;

	int ans;
	if (a >= b)
		ans = 0;
	else
	{
		ans = 1;
		rep1 (i, b)
		{
			ans *= k;
			if (b <= a * ans)
			{
				ans = i;
				break;
			}
		}
	}
	cout << ans << endl;
}
