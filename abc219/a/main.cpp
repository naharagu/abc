#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main()
{
	int n;
	cin >> n;

	if (n >= 90)
		cout << "expert" << endl;
	else if (n >= 70)
		cout << 90 - n << endl;
	else if (n >= 40)
		cout << 70 - n << endl;
	else
		cout << 40 - n << endl;

}
