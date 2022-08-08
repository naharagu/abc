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

	int left = (s[0] - '0') * 10 + s[1] - '0';
	int right = (s[2] - '0') * 10 + s[3] - '0';
	if (1 <= left && left <= 12 && 1<= right && right <= 12)
		cout << "AMBIGUOUS" << endl;
	else if (1 <= left && left <= 12)
		cout << "MMYY" << endl;
	else if (1 <= right && right <= 12)
		cout << "YYMM" << endl;
	else
		cout << "NA" << endl;
}
