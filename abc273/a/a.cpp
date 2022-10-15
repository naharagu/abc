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


int helper(int n)
{
	if (n == 0)
		return 1;
	return n * helper(n - 1);
}

int main()
{
	int n;
	cin >> n;

	cout << helper(n) << endl;
}
