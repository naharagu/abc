#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int a, b, c, d, e;
	cin >> a  >> b >> c >> d >> e;

	vector<int> z(a);
	vector<int> y(a);

	for (int i = 0; i < a; i++)
	{
		cin >> z[i];
		y[i] = z[i];
	}
	for (int i = 0; i < a; i++)
	{
		if (b - 1 <= i && i <= c - 1)
			z[i] = y[d - b + i];
		else if (d - 1 <= i && i <= e - 1)
			z[i] = y[b - d + i];
	}
	for (int i = 0; i < a; i++)
	{

		cout << z[i];
		if (i == a - 1)
			cout << endl;
		else
			cout << ' ';
	}

}