#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;
	map<int, int > m;

	for (int i = 1; i <= n; i++)
	{
		int p;
		cin >> p;
		m[p] = i;
	}

	for (int i = 1; i <= n; i++)
	{
		cout << m[i];
		if (i != n)
			cout << ' ';
		else
			cout << endl;
	}

}