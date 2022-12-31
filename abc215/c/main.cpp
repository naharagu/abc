#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	string s;
	ll k;
	cin >> s >> k;

	vector<string> ans;
	sort(s.begin(), s.end());

	do
	{
		ans.push_back(s);
	}	while(next_permutation(s.begin(), s.end()));

	cout << ans[k - 1] << endl;
}
