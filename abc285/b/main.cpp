#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	string s;
	cin >> n >> s;


	for (int i = 0; i < (int)s.size() - 1; i++)
	{
		for (int j = i + 1; j < (int)s.size(); j++)
		{
			if (s[i] != s[j])
			{
				cout << j - i << endl;
				break;
			}
		}
	}
}