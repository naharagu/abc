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

int n, m;
// vector<bool> solved(m);
// vector<int> wa(m);
bool solved[101010];
int wa[101010];

int main()
{
	cin >> n >> m;
	rep(i, m)
	{
		int p;
		string s;
		cin >> p >> s;
		p--;

		if (s == "WA" && !solved[p])
			wa[p]++;
		if (s == "AC")
			solved[p] = true;
	}
	int ans_ac = 0;
	int ans_wa = 0;
	rep(i, n)
	{
		if (solved[i])
		{
			ans_ac++;
			ans_wa += wa[i];
		}
	}
	cout << ans_ac << " " << ans_wa << endl;
}
