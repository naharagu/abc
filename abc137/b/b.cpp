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
	int k, x;
	cin >> k >> x;

	for (int i = x - k + 1; i < x + k; i++)
	{
		cout << i;
		if (i != x + k - 1)
			cout << " ";
	}

	cout << endl;
}
