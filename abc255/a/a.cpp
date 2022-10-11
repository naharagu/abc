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
	int r, c;
	cin >> r >> c;

	vector<vector<int>> a(2, vector<int>(2));

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cin >> a[i][j];
	}

	cout << a[r-1][c-1] << endl;
}
