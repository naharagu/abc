#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int a, b;
	cin >> a >> b;

	if (0 < a && b == 0)
		cout << "Gold" << endl;
	else if (a == 0 && b > 0)
		cout << "Silver" << endl;
	else if (a > 0 && b > 0)
		cout << "Alloy" << endl;
}