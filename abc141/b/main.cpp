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

	rep(i, (int)s.size())
	{
		if (i % 2 == 0)
		{
			if (s[i] == 'L')
			{
				cout << "No" << endl;
				return 0;
			}
		}
		else
		{
			if (s[i] == 'R')
			{
				cout << "No" << endl;
				return 0;
			}
		}
	}

	cout << "Yes" << endl;
}
