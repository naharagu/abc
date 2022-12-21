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
	string s;
	cin >> s;

	int len = s.size();
	vector<string> v(len);

	rep(i, len)
		v[i] = s.substr(i, len - i) + s.substr(0, i);

	cout << *min_element(v.begin(), v.end()) << endl;
	cout << *max_element(v.begin(), v.end()) << endl;
}
