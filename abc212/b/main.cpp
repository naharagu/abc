#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	string s;
	cin >> s;

	bool weak = true;

	for (int i = 0; i < 3; i++)
	{
		if (s[i] != s[i + 1])
			weak = false;
	}
	if (weak)
	{
		cout << "Weak" << endl;
		return 0;
	}

	int x[4];
	for (int i = 0; i < 4; i++)
	{
		x[i] = s[i] - '0';
	}

	bool cmp01 = ((x[0] + 1) % 10) == x[1];
	bool cmp12 = ((x[1] + 1) % 10) == x[2];
	bool cmp23 = ((x[2] + 1) % 10) == x[3];

	if (cmp01 && cmp12 && cmp23)
	{
		cout << "Weak" << endl;
		return 0;
	}

	cout << "Strong" << endl;
}
