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
	int n, q;
	cin >> n >> q;

	vector<int> x(q);
	vector<int> a(n);
	rep(i, q)
		cin >> x[i];
	rep(i, n)
		a[i] = i + 1;

	for (int i = 0; i < q; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (x[i] == a[j])
			{
				if (j + 1 == n)
				{
					int tmp = a[j - 1];
					a[j - 1] = a[j];
					a[j] = tmp;
					break;
				}
				else
				{
					int tmp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = tmp;
					break;
				}
			}
		}
	}

	int i = 0;
	while (i < n)
	{
		cout << a[i];
		if (i == n - 1)
			cout << endl;
		else
			cout << " ";
		i++;
	}
}
