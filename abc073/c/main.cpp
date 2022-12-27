#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;
	set<int> s;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (s.count(a))
			s.erase(a);
		else
			s.insert(a);
	}

	cout << s.size() << endl;
}