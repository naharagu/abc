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

	string alpha = "abcdefghijklmnopqrstuvwxyz";

	bool flag = false;

	rep(i, 26)
	{
		rep(j, (int)s.size())
		{
			if (s[j] == alpha[i])
				flag = true;
		}
		if (!flag)
		{
			cout << alpha[i] << endl;
			return 0;
		}

		flag = false;
	}

	cout << "None" << endl;
}
