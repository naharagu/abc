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

int find_gcd(vector<int> a)
{

}

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	rep(i, n)
		cin >> a[i];

	int ans = 0;

	rep(i, n)
	{
		gcd(a);
	}

	cout << ans << endl;
}
