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

	if (s[0] == '1')
	{
		cout << "No" << endl;
		return 0;
	}

	bool ans = false;

	string t = "0000000";
	t[0] = s[6];
	t[1] = s[3];
	t[2] = s[1] | s[7];
	t[3] = s[0] | s[4];
	t[4] = s[2] | s[8];
	t[5] = s[5];
	t[6] = s[9];

	for (int i = 1; i < 6; i++)
	{
		bool flag1 = false;
		bool flag2 = false;
		if (t[i] == '0')
		{
			for (int j = 0; j < i; j++)
			{
				if (t[j] == '1')
					flag1 = true;
			}
			for (int k = i + 1; k < 7; k++)
			{
				if (t[k] == '1')
					flag2 = true;
			}
			if (flag1 && flag2)
				ans = true;
		}
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
