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
	string o, e;
	cin >> o >> e;

	int len = o.size() + e.size();

	rep(i, len)
	{
		if (i % 2 == 0)
			cout << o[i / 2];
		else
			cout << e[i / 2];
	}

	cout << endl;
}
