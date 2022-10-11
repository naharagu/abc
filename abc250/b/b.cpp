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

	for (int x = 0; x < n * a; x++)
	{
		for (int y = 0; y < n * b; y++)
		{
			if (((x / a) + (y / b)) % 2 == 0)
				cout << '.';
			else
				cout << '#';
			if (y == n * b - 1)
				cout << endl;
		}
	}
}
