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

	int ans = 0;

	if (s == "Friday")
		ans = 1;
	else if (s == "Thursday")
		ans = 2;
	else if (s == "Wednesday")
		ans = 3;
	else if (s == "Tuesday")
		ans = 4;
	else if (s == "Monday")
		ans = 5;

	cout << ans << endl;
}
