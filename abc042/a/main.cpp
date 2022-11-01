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
	int a, b, c;
	cin >> a  >> b >> c;

	if ((a == 5 && b == 5 && c == 7) ||
		(a == 5 && b == 7 && c == 5) ||
		(a == 7 && b == 5 && c == 5) )
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
