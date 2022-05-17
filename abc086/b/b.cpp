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
	int a, b;
	cin >> a >> b;

	int n = 0;
	if (b < 10)
		n = a * 10 + b;
	else if (b < 100)
		n = a * 100 + b;
	else if (b == 100)
		n = a * 1000 + b;

	bool flag = false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n == i * i)
			flag = true;
	}
	if (flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
