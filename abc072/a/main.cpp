#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int x, t;
	cin >> x >> t;

	cout << max(x - t, 0) << endl;
}