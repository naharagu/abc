#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<char> s(n);
	for (int i = 0; i < n; i++)
		cin >> s[i];

	int count = 0;
	bool flag = false;

	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'o')
		{
			count++;
			if (count == k + 1)
				flag = true;
			if (flag)
				s[i] = 'x';
		}
	}

	for (int i = 0; i < n; i++)
		cout << s[i];
	cout << endl;
}