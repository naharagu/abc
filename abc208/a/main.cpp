#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a <= b && b <= a * 6)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
