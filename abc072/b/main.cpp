#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < (int)s.size(); i+=2)
	{
		cout << s[i];
	}
	cout << endl;
}