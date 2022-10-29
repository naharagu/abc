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

	if (n == 1)
	{
		cout << 1 << endl;
		return 0;
	}

	int ans = 1;
	int flag = 2;

	while (flag <= n)
	{
		flag *= 2;
		ans++;
	}


	cout << flag / 2 << endl;
}
