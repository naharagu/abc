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
	string sa, sb, sc;
	cin >> sa >> sb >> sc;

	char turn = 'a';

	while (1)
	{
		if (turn == 'a')
		{
			if (sa.size() > 0)
			{
				turn = sa[0];
				sa.erase(0, 1);
			}
			else
			{
				cout << 'A' << endl;
				break;
			}
		}
		if (turn == 'b')
		{
			if (sb.size() > 0)
			{
				turn = sb[0];
				sb.erase(0, 1);
			}
			else
			{
				cout << 'B' << endl;
				break;
			}
		}
		if (turn == 'c')
		{
			if (sc.size() > 0)
			{
				turn = sc[0];
				sc.erase(0, 1);
			}
			else
			{
				cout << 'C' << endl;
				break;
			}
		}
	}
}
