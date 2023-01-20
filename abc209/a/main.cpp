#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << max(b - a + 1, 0) << endl;
}