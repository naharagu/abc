#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
int n, m, a, b, c, d, e, x, y, z, h, w;
string t;
string ans;
bool flag, flag1, flag2;

int main()
{
	vector<string> s(4);
	for (int i = 1; i < (int)(4); i++)
		cin >> s[i];
	cin >> t;

	for (int i = 0; i < (int)(t.size()); i++)
	{
		ans = ans + s[t[i] - '0'];
	}

	cout << ans << endl;
}
