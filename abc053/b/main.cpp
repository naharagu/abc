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

	int ans_A = 0;
	int ans_Z = 0;

	rep(i, s.size())
	{
		if (s[i] == 'A')
		{
			ans_A = i;
			break;
		}
	}

	for (int i = (int) s.size() - 1; i >= 0; i--)
	{
		if (s[i] == 'Z')
		{
			ans_Z = i;
			break;
		}
	}

	cout << ans_Z - ans_A + 1 << endl;
}
