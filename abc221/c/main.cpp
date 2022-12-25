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
	string n;
	cin >> n;
	sort(n.begin(), n.end());

	int ans = 0;

	do
	{
		for (int i = 1; i < (int)n.size(); i++)
		{
			int left = 0;
			int right = 0;
			for (int j = 0; j < i; j++)
				left = left * 10 + n[j] - '0';
			for (int j = i; j < (int)n.size(); j++)
				right = right * 10 + n[j] - '0';
			ans = max(ans, left * right);
		}
	}
	while (next_permutation(n.begin(), n.end()));

	cout << ans << endl;
}
