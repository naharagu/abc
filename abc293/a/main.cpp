#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < s.size() / 2; i++)
		{
			char tmp = s[(2 * i - 1) + 1];
			s[(2 * i - 1) + 1] = s[2 * i + 1];
			s[2 * i + 1] = tmp;
		}

	cout << s << endl;
}