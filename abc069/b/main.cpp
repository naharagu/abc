#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	string s;
	cin >> s;

	int n = s.size();
	cout << s[0] << n - 2 << s[n - 1] << endl;
}