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
	int s;
	cin >> s;

	set<int> done;
	done.insert(s);

	int now = s;

	for (int i = 2; i < 1000000; i++)
	{
		int next;
		if (now % 2)
			next = 3 * now + 1;
		else
			next = now / 2;

		if (done.count(next))
		{
			cout << i << endl;
			return 0;
		}

		done.insert(next);
		now = next;
	}
}
