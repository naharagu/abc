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

	if (a == 0 || b == 0)
		cout << "Zero" << endl;
	else if (a < 0 && 0 < b)
		cout << "Zero" << endl;
	else if (a > 0 && b > 0)
		cout << "Positive" << endl;
	else if ((b - a) % 2)
		cout << "Positive" << endl;
	else
		cout << "Negative" << endl;
}
