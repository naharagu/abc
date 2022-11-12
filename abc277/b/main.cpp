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
	rep(i, n)
		cin >> s[i];
	bool ans = true;

	rep(i, n)
	{
		if (s[i][0] != 'H' &&
			s[i][0] != 'D' &&
			s[i][0] != 'C' &&
			s[i][0] != 'S')
			ans = false;

		if (s[i][1] != 'A' &&
			s[i][1] != '2' &&
			s[i][1] != '3' &&
			s[i][1] != '4' &&
			s[i][1] != '5' &&
			s[i][1] != '6' &&
			s[i][1] != '7' &&
			s[i][1] != '8' &&
			s[i][1] != '9' &&
			s[i][1] != 'T' &&
			s[i][1] != 'J' &&
			s[i][1] != 'Q' &&
			s[i][1] != 'K')
			ans = false;
	}
	rep(i, n - 1)
	{
		for (int j = i + 1; j < n; j++)
		if (s[i] == s[j])
			ans = false;
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
