#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	string s;
	cin >> s;

	if (s.size() == 4)
		cout << s[0] << s[1];
	else
		cout << s[0];

	int y = s[s.size() -1] - '0';

	if (y <= 2)
		cout << '-' << endl;
	else if (y <= 6)
		cout <<  endl;
	else
		cout << '+' <<  endl;

}