#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	// vector<int> a(n);
	vector<pair<int, int>> p;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		p.push_back(make_pair(a, i + 1));
	}

	sort(p.begin(), p.end(), greater<pair<int, int>>());

	cout << p[1].second << endl;
}