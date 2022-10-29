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

	vector<string> s(n);
	vector<int> cnt(n);

	rep(i, n)
		cin >> s.at(i);
	rep(i, n)
		cnt.at(i) = 0;

	rep(i, n)
	{
		if (i > 0)
		{
			rep(j, i)
			{
				if (s.at(i) == s.at(j))
					cnt.at(i)++;
			}
		}
		if (cnt.at(i) > 0)
		{
			cout << s.at(i);
			cout << '(';
			cout << cnt.at(i);
			cout << ')' << endl;
		}
		else
			cout << s.at(i) << endl;
	}
}
