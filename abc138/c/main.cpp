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

	vector<double> v(n);
	rep(i, n)
		cin >> v[i];

	sort(v.begin(), v.end());


	for (int i = 1; i <= n - 1; i++)
	{
		v[i] = (v[i] + v[i - 1]) / 2;
	}

	cout << v[n - 1] << endl;
}
