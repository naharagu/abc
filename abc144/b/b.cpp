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

	bool flag = false;

	rep1(i, 9)
	{
		rep1(j, 9)
		{
			if (i * j == n)
			{
				flag = true;
				break;
			}
		}
	}

	if (flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
