#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	string x;
	cin >> x;

	vector<int> pos(26);
	for (int i = 0; i < 26; i++)
		pos[x[i] - 'a'] = i;

	int n;
	cin >> n;
	vector<vector<int>> s(n);
	for (vector<int> &v : s)
	{
		string t;
		cin >> t;
		for (const char c : t)
			v.push_back(pos[c - 'a']);
	}

	sort(begin(s), end(s));

	for (const vector<int> &w : s)
	{
		for (const int d : w)
			cout << x[d];
		cout << endl;
	}
}
