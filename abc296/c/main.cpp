#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int N, X;
	cin >> N >> X;

	vector<int> nums(N);
	for (int i = 0; i < N; ++i)
		cin >> nums[i];

	if (X == 0)
	{
		cout << "Yes" << endl;
		return 0;
	}
	unordered_set<int> seen;
	for (int i = 0; i < N; i++)
	{
		if (seen.count(X + nums[i]))
		{
			cout << "Yes" << endl;
			return 0;
		}
		else if (seen.count(nums[i] - X))
		{
			cout << "Yes" << endl;
			return 0;
		}
		seen.insert(nums[i]);
	}
	cout << "No" << endl;
	return 0;
}
