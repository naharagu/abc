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

vector<int> enumdiv(int n)
{
    vector<int> S;
    for (int i = 1; 1LL*i*i <= n; i++) if (n%i == 0) { S.push_back(i); if (i*i != n) S.push_back(n / i); }
    sort(S.begin(), S.end());
    return S;
}

int main()
{
	int n;
	cin >> n;

	int ans = 0;

	rep1(i, n)
	{
		if (i % 2 == 1)
		{
			auto div = enumdiv(i);
			if (div.size() == 8)
				ans++;
		}
	}
	cout << ans << endl;
}
