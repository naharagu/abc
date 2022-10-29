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

	int a[n + 2];
	rep (i, n)
		cin >> a[i];
	a[n] = 0;
	a[n + 1] = 0;

	int count = 0;
	for (int i = 0; i < n + 2; i++)
	{
		for (int j = i + 1; j < n + 2; j++)
		{
			for (int k = j + 1; k < n + 2; k++)
			{
				if ((a[i] + a[j] + a[k] == n) && a[i] <= w  && a[j] <= w && a[k] <= w)
					count++;
			}
		}
	}
	cout << count << endl;
}
