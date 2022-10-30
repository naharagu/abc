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
	int n, k, q;
	cin >> n >> k >> q;

	vector<int> p(n, k);

	rep(i, q)
	{
		int a;
		cin >> a;

		p[a - 1]++;
	}

	rep(i, n)
	{
		if (p[i] > q)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

}
