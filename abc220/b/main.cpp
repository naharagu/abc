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


ll ten(int k, string s)
{
    ll ans=0;

    for(char x:s){
        ans *= k;
        ans += x - '0';
    }

    return ans;
}

int main()
{
	ll k;
	cin >> k;
	string  a, b;
	cin >> a >> b;

	cout << ten(k, a) * ten(k, b) << endl;
}
