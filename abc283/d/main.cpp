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


int find_j(int j, int i,  string s)
{
	int cnt_right = 1;
	int cnt_left = 0;

	for (int k = i - 1; k > 0; k--)
	{
		if (s[k] == '(')
			cnt_left++;
		else if (s[k] == ')')
			cnt_right++;
		if (cnt_left == cnt_right)
		{
			j = k;
			break;
		}
	}

	return j;
}

int main()
{
	string s;
	cin >> s;

	bool ans = true;
	int m[26];

	rep(i, 26)
		m[i] = 0;
	int cnt_left = 0;
	int cnt_right = 0;
	vector<int> left(s.size());

	rep(i, s.size())
	{
		if (s[i] == '(')
		{
			cnt_left++;
			left[cnt_left] = i;
			cnt_right = 0;
		}
		else if (s[i] == ')')
		{
			cnt_right++;
			// int j = 0;
			// j = find_j(j, i, s);

			for (int k = left[cnt_left - cnt_right + 1]; k <= i; k++)
			{
				if ('a' <= s[k] && s[k] <= 'z')
					if (m[s[k] - 'a'] == 1)
						m[s[k] - 'a'] = 0;
			}
		}
		else
		{
			if (m[s[i] - 'a'] == 1)
			{
				ans = false;
				break;
			}
			else
				m[s[i] - 'a'] = 1;
		}
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
