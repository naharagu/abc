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

bool check(int a, int b, int c)
{
	if (!a || !b || !c)
		return false;
	if (a % 2 || b % 2 || c % 2)
		return false;
	return true;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a == 1 && b == 1 && c == 1)
	{
		cout << 0 << endl;
		return 0;
	}

	if (a == b && b == c)
	{
		cout << -1 << endl;
		return 0;
	}

	int ans = 0;

	while(check(a, b, c))
	{
		int x = b / 2 + c / 2;
		int y = a / 2 + c / 2;
		int z = a / 2 + b / 2;
		a = x;
		b = y;
		c = z;
		ans++;
	}
	cout << ans << endl;
}
