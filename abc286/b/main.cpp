#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	string s;

	cin >> n >> s;

	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == 'n' && s[i + 1] == 'a')
		{
			cout << "nya";
			i+=1;
		}
		// else if (s[i] =='n')
		// {
		// 	cout << 'n';
		// 	cout << s[i + 1];
		// 	i++;
		// }
		else
			cout << s[i];
	}
	if (!(s[n - 2] == 'n' && s[n - 1] == 'a'))
		cout << s[n - 1];
	cout << endl;
}