#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int a, b;
	cin >> a >> b;

	if ((a + b) % 3 == 0 || a % 3 == 0 || b % 3 == 0)
		cout << "Possible" << endl;
	else
		cout << "Impossible" << endl;
}