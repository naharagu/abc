#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	int count = 0;
	bool flag = false;

	rep(i, n)
	{
		if (count % 2 == 0 && flag == false && s[i] == ',')
			s[i] = '.';
		if (s[i] == '"' && flag == false)
		{
			count++;
			flag = true;
		}
		else if (s[i] == '"' && flag == true)
		{
			count++;
			flag = false;
		}
	}

	cout << s << endl;
}
