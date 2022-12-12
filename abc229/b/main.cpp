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
	ll a, b;
	cin >> a >> b;

	bool ans = true;

	while (a != 0 && b != 0)
	{
		int x = a % 10;
		int	y = b % 10;

		if (x + y > 9)
			ans = false;

		a = a / 10;
		b = b / 10;
	}


	if(ans)
		cout << "Easy" << endl;
	else
		cout << "Hard" << endl;
}
