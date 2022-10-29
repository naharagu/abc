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
	int n, a, b;
	cin >> n >> a >> b;

	string s;
	cin >> s;

	int clear = 0;
	int inter = 0;

	rep(i, n)
	{
		if (s[i] == 'a')
		{
			if (clear < a + b)
			{
				cout << "Yes" << endl;
				clear++;
			}
			else
				cout << "No" << endl;
		}
		else if (s[i] == 'b')
		{
			if (clear < a + b && inter < b)
			{
				cout << "Yes" << endl;
				clear++;
				inter++;
			}
			else
				cout << "No" << endl;
		}
		else if (s[i] == 'c')
			cout << "No" << endl;
	}
}
