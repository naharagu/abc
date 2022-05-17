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
	int n, a;
	cin >> n >> a;

	bool ans = false;
	for (int i = 0; i <= a; i++)
	{
		if ((n - i) % 500 == 0)
			ans = true;
	}
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
