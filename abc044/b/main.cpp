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
	string w;
	cin >> w;

	string alpha = "abcdefghijklmnopqrstuvwxyz";
	bool ans = true;

	rep(i, 26)
	{
		int count = 0;

		rep(j, (int)w.size())
		{
			if (w[j] == alpha[i])
				count++;
		}
		if (count % 2)
			ans = false;
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
