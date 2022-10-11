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

	n = n + 1;

	vector<vector<int>> a(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (i == 0 || i == 1 || j == 0 || j == i - 1)
				a[i][j] = 1;
			else
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			cout << a[i][j];
			if (j == i - 1)
				cout << endl;
			else
				cout << ' ';
		}
	}
}
