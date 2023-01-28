#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int a, b, c;
	cin >> a  >> b >> c;

	cout << a + b + c - min(a, min(b, c)) << endl;
}