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
	string s;
	cin >> s;

	bool ans = true;

	if (s[0] < 'A' || s[0] > 'Z')
		ans = false;
	if (s[7] < 'A' || s[7] > 'Z')
		ans = false;

	if (s[1] < '1' || s[1] > '9')
		ans = false;

	for (int i = 2; i <= 6; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			ans = false;
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
