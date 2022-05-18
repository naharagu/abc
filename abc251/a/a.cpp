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
	int n, w;
	cin >> n >> w;
	set<int> ans;

	rep(i, n)
	{
		cin >> a[i];
		if (a[i] <= w)
			ans.insert(a[i]);
	}
	
}
