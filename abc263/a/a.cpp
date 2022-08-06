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
	vector<int> a(5);

	rep(i, 5)
		cin >> a[i];

	int number1 = a[0];
	int number2 = 0;

	int count1 = 0;
	int count2 = 0;

	if (a[1] != number1)
		number2 = a[1];
	else if (a[2] != number1)
		number2 = a[2];
	else if (a[3] != number1)
		number2 = a[3];

	rep(i, 5)
	{
		if (a[i] == number1)
			count1++;
		else if (a[i] == number2)
			count2++;
	}
	if ((count1 == 3 && count2 ==2) || (count1 == 2 && count2 == 3))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

}
