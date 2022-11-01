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

	map<char, int> mp;

	rep(i, s.size())
	{
		mp[s[i]]++;
	}

	bool b1 = (!mp['N'] && !mp['S']) || (mp['N'] && mp['S']);
	bool b2 = (!mp['E'] && !mp['W']) || (mp['E'] && mp['W']);

	if (b1 && b2)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
