#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	string s;
	cin >> s;

	int ans = 0;

	for (int i = 0; i < s.size(); i += 2)
	{
		string a = s.substr(0, i / 2);
		string b = s.substr(i / 2, i / 2);
		if (a == b)
			ans = max(ans, i);
	}

	cout << ans << endl;
}