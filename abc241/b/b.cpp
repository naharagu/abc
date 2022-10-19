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
	int n, m;
	cin >> n >> m;

	vector<int> a(n), b(m);
	rep(i, n)
		cin >> a[i];
	rep(i, m)
		cin >> b[i];

	int count = 0;

	rep(i, m)
	{
		rep(j, n)
		{
			if (b[i] == a[j])
			{
				a[j] = 0;
				count++;
				break;
			}
		}
	}

	if (count == m)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

}
