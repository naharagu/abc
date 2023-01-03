#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int a, b;
	cin >> a >> b;
	
	int ans = a ^= b;
	cout << ans << endl;
}