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

	cout << "AGC0";

	if (n >= 42)
		cout << n + 1 << endl;
	else if (n >= 10)
		cout << n  << endl;
	else
		cout << '0' << n << endl;

}
