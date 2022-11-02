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

	if (n == 25)
		cout << "Christmas" << endl;
	else if (n == 24)
		cout << "Christmas Eve" << endl;
	else if (n == 23)
		cout << "Christmas Eve Eve" << endl;
	else if (n == 22)
		cout << "Christmas Eve Eve Eve" << endl;
}
