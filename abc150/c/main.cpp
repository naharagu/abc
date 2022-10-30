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

	vector<int> p(n + 1);
	vector<int> q(n + 1);

	rep(i, n)
		cin >> p[i];
	rep(i, n)
		cin >> q[i];

	vector<int> v;

	rep(i, n)
		v.push_back(i + 1);

	int index = 0;
	int a = -1;
	int b = -1;

	while (next_permutation(v.begin(), v.end()))
	{
		bool flag = true;

		rep(i , n)
		{
			if (v[i] != p[i])
				flag = false;
		}
		if(flag)
			a = index;

		flag = true;
		rep(i , n)
		{
			if (v[i] != q[i])
				flag = false;
		}
		if(flag)
			b = index;
		index++;
	}

	int ans = abs(a - b);
	cout << ans << endl;
}
