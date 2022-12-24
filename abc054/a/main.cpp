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
	int a, b;
	cin >> a >> b;

	if (a == b)
		cout << "Draw" << endl;
	else if (a == 1)
		cout << "Alice" << endl;
	else if (b == 1)
		cout << "Bob" << endl;
	else if (a > b)
		cout << "Alice" << endl;
	else if (b > a)
		cout << "Bob" << endl;
}
