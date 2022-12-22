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
	string s, t;
	cin >> s >> t;

	map<int, int> n;

	rep(i, s.size())
	{
		n[i] = s[i] - t[i];
		cout << n[i] << endl;
	}

	if (n.size() == 2)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
