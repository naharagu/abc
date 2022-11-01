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
	int len = s.size();
	if (s[0] != 'A')
		ans = false;

	int count = 0;
	for (int i = 2; i < len - 1; i++)
	{
		if (s[i] == 'C')
			count++;
	}
	if (count != 1)
		ans = false;

	count = 0;
	for (int i = 0; i < len; i++)
	{
		if ('A' <= s[i] && s[i] <= 'Z')
			count++;
	}
	if (count != 2)
		ans = false;

	if (ans)
		cout << "AC" << endl;
	else
		cout << "WA" << endl;
}
