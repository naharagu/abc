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
	vector<int> a(9);

	for (int i = 0; i <= 9; i++)
		cin >> a[i];

	int next = a[0];
	next = a[next];
	next = a[next];

	cout << next << endl;
}
