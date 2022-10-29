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
	double n;
	cin >> n;

	double ans = n / 1.08;
	ans = (int) ans / 1;

	int price = 0;

	while(price < n)
	{
		price = (int) ans * 1.08 / 1;
		if (price == n)
		{
			cout << ans << endl;
			return 0;
		}
		ans++;
	}
	cout << ":(" << endl;
}
