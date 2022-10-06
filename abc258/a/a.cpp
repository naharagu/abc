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
	int k;
	cin >> k;

	int h = 21;

	if (k < 10)
		cout << h << ':' << '0' << k << endl;
	else if (k < 60)
		cout << h << ':' << k << endl;
	h = 22;
	if (k < 70 && k >= 60)
		cout << h << ':' << '0' << k - 60 << endl;
	else if (k > 80)
		cout << h << ':' << k - 60 << endl;
}
