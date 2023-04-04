#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;


int main()
{
	ll N, M;
	cin >> N >> M;

	ll X = -1;
	ll sqM = sqrt(M) + 1;
	ll sqN = sqrt(N) + 1;
	for (ll a = 1; a <= sqM || a <= sqN; ++a)
	{
		ll b = (M + a - 1) / a;
		if (b <= N && a <= N)
		{
			if (X == -1)
				X = a * b;
			else
				X = min(X, a * b);
		}
	}
	cout << X << endl;
	return 0;
}