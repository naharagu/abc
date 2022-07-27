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
	int count = 0;

	rep(i, s.size())
	{
		if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T')
		{
			count++;
			if (count > ans)
				ans = count;
		}
		else
			count = 0;
	}
	cout << ans << endl;
}
