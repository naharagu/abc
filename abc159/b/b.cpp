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

	bool flag = true;

	int len = s.size();

	rep(i, len)
	{
		if (s[i] != s[len - i - 1])
			flag = false;
	}

	int left = (len - 1) / 2 - 1;
	for (int i = 0; i <= left; i++)
	{
		if (s[i] != s[left - i])
			flag = false;
	}

	int right = (len + 3) / 2 - 1;
	for (int i = right; i < len; i++)
	{
		if (s[i] != s[len - i - 1])
			flag = false;
	}

	if (flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
