#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int x, a, b;
	cin >> x >> a >> b;

	if (b <= a)
	{
		cout << "delicious" << endl;
	}
	else if (b <= a + x)
	{
		cout << "safe" << endl;
	}
	else
	{
		cout << "dangerous" << endl;
	}
}