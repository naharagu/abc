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
	char s[2][2];
	cin >> s[0] >> s[1];

	bool ans = true;

	int count = 0;
	rep(i, 2)
	{
		rep(j, 2)
		{
			if (s[i][j] == '#')
				count++;
		}
	}

	if (count == 2)
	{
		if (s[0][0] == '#' && s[1][1] == '#')
			ans = false;
		if (s[0][1] == '#' && s[1][0] == '#')
		 	ans = false;
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
