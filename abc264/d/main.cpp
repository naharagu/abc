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
	int n = s.size();
	int ans = 0;

	replace(s.begin(), s.end(), 'a' , '0');
	replace(s.begin(), s.end(), 't' , '1');
	replace(s.begin(), s.end(), 'c' , '2');
	replace(s.begin(), s.end(), 'o' , '3');
	replace(s.begin(), s.end(), 'd' , '4');
	replace(s.begin(), s.end(), 'e' , '5');
	replace(s.begin(), s.end(), 'r' , '6');

	for (int k = 0; k < n - 1; k++)
	{
		for (int i = n - 1; i >= k; i--)
		{
			if (s[i] > s[i + 1])
			{
				swap(s[i], s[i + 1]);
				ans++;
			}
		}
	}
	cout << s << endl;
	cout << ans << endl;
}
