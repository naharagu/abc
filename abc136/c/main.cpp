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
	vector<int> h(n);
	for (int i = 0; i < n; i++)
	{
		cin >> h[i];
	}

	bool ans = true;
	for (int i = n - 2; i >= 0; i--)
	{
		if (h[i] > h[i + 1] + 1)
			ans = false;
		else if (h[i] == h[i + 1] + 1)
			h[i]--;
	}


	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
