#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int mod(int a, int b)
{
	return a % b;
}

int main()
{
	int a, b, c;
	cin >> a  >> b >> c;

	bool ans = false;

	if (mod(a, b) == 0)
		ans = false;
	else
	{
		int i = 1;
		int x = 0;
		while (i < b)
		{
			x += mod(a * i, b);
			if (x % b == c)
				ans = true;
			i++;
		}
	}

	if (ans)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}