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
	int m1, d1, m2, d2;
	cin >> m1 >> d1 >> m2 >> d2;

	if (m2 > m1)
		cout << 1 << endl;
	else
		cout << 0 << endl;
}
