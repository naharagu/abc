#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main()
{
	string a, b;
	cin >> a >> b;

	int	len_a = a.size();
	int	len_b = b.size();

	if (len_a > len_b)
		cout << "GREATER" << endl;
	else if (len_a < len_b)
		cout << "LESS" << endl;
	else
	{
		rep(i, len_a)
		{
			if (a[i] > b[i])
			{
				cout << "GREATER" << endl;
				return 0;
			}
			else if (a[i] < b[i])
			{
				cout << "LESS" << endl;
				return 0;
			}
		}
		cout << "EQUAL" << endl;
	}
}
