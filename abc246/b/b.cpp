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

	int d2 = a * a + b * b;
	double d = d2;
	d = sqrt(d);

	double da = a;
	double db = b;

	printf("%.12f %.12f\n", da / d,  db / d);
}