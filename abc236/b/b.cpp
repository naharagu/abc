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

	int sum_cards = 0;

	rep(i, n * 4 - 1)
	{
		int a;
		cin >> a;
		sum_cards += a;
	}

	int sum = (1 + n) * n * 4 / 2;

	cout << sum - sum_cards << endl;
}
