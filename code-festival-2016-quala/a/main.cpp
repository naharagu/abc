#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < 4; i++)
		cout << s[i];
	cout << ' ';
	for (int i = 4; i < 12; i++)
		cout << s[i];
	cout << endl;
}