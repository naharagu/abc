#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; ++i)
		cin >> A[i];

	int ans = 0;
	for (int i = 0; i < N; ++i)
	{
		if (A[i] == i + 1 || A[A[i] - 1] == i + 1)
			ans++;
	}
	cout << ans << endl;
}
