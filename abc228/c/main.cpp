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
	int n, k;
	cin >> n >> k;

	vector<int> p(n);
	vector<int> s(n);
	rep(i, n)
	{
		int p1, p2, p3;
		cin >> p1 >> p2 >> p3;
		p[i] = p1 + p2 + p3;
		s[i] = p[i];
	}

	sort(s.begin(), s.end());
	int thre = s[n - k] - 300;

	rep(i, n)
	{
		if (p[i] >= thre)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}
