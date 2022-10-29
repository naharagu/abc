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
	int h1, w1, h2, w2;
	cin >> h1 >> w1;
	vector<vector<int>> a(h1, vector<int>(w1));
	rep(i, h1)
	{
		rep(j, w1)
			cin >> a[i][j];
	}
	
	cin >> h2 >> w2;
	vector<vector<int>> b(h2, vector<int>(w2));
	rep(i, h2)
	{
		rep(j, w2)
			cin >> b[i][j];
	}

	bool ans = true;
	// rep(i, h1)
	// {
	// 	rep(j, w1)
	// 	{
	// 		if (b[0][0] == a[i][j])
	// 		{

	// 		}
	// 	}
	// }

	rep(i, h2)
	{
		rep(j, w2)
		{
			if (a[i][j] != b[i][j])
			{
				ans = false;
				break;
			}
		}
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
