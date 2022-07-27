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
	char b;
	cin >> b;

	char ans = 0;

	if (b == 'A')
		ans = 'T';
	else if (b == 'T')
		ans = 'A';
	else if (b == 'G')
		ans = 'C';
	else if (b == 'C')
		ans = 'G';

	cout << ans << endl;
}
