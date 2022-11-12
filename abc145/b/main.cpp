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
	string s;
	cin >> s;

	bool ans = true;

	if (n == 1)
		ans = false;
	rep(i, n / 2)
	{
		if (s[i] != s[i + n / 2])
			ans = false;
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
