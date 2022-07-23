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
	int n;
	cin >> n;
	vector<vector<char>>tab(n+1, vector<char>(n+1));

	rep1(i, n)
	{
		rep1(j,n)
			cin >> tab.at(i).at(j);
	}
	bool flag;
	flag = true;

	rep1(i, n)
	{
		rep1(j,n)
		{
			if (i == j || \
				(tab.at(i).at(j) == 'W' && tab.at(j).at(i) == 'L') || \
				(tab.at(i).at(j) == 'L' && tab.at(j).at(i) == 'W') || \
				(tab.at(i).at(j) == 'D' && tab.at(j).at(i) == 'D'))
				continue;
			else
			{
				flag = false;
				break;
			}
		}
	}

	if (flag)
		cout << "correct" << endl;
	else
		cout << "incorrect" << endl;
}
