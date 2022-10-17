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
	int v, a, b, c;
	cin >> v >> a >> b >> c;

	while(true)
	{
		v = v - a;
		if (v < 0)
		{
			cout << 'F' << endl;
			return 0;
		}
		v = v - b;
		if (v < 0)
		{
			cout << 'M' << endl;
			return 0;
		}
		v = v - c;
		if (v < 0)
		{
			cout << 'T' << endl;
			return 0;
		}
	}
}
