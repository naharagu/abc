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
	int n, y;
	cin >> n >> y;


	int a = -1;
	int b = -1;
	int c = -1;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; i + j <= n; j++)
		{
			int k = n - i - j;
			if (10000 * i + 5000 * j + 1000 * k == y)
			{
				a = i;
				b = j;
				c = k;
				break;
			}
		}
	}
	cout << a << " " << b << " " << c << endl;
}
