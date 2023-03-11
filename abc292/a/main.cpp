#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		s[i] -= 'a' - 'A' ;
	}
	cout << s << endl;
}