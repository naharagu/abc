#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	double a, b;
	cin >> a >> b;

	double c = (a - b) / 3 + b;

	cout << setprecision(10);
	cout << c << endl;
}