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

vector<int> make_primes(int n)
{ // [2,n]
	vector<int> res;
	vector<int> pr(n + 1, 1);
	pr[0] = pr[1] = 0;

	for (int p = 2; p < sqrt(n) + 2; p++)
	{
		if (pr[p])
		{
			for (int x = p * 2; x <= n; x += p)
				pr[x] = 0;
		}
	}

	for (int p = 2; p < sqrt(n) + 2; p++)
	{
		if (pr[p])
			res.push_back(p);
	}

	return res;
}


vector<bool> is_prime(INT_MAX, true);

void check_prime(int n)
{
	is_prime[0] = false;
	is_prime[1] = false;

	for (int i = 2; i * i <= n; i++)
	{
		if(is_prime[i])
		{
			for (int j = 2; i * j <= n; j++)
				is_prime[i * j] = false;
		}
	}
}

int main()
{
	int n;
	cin >> n;

	for (int i = n; i < INT_MAX; i++)
	{
		check_prime(i);

		if (is_prime[i])
		{
			cout << i << endl;
			return 0;
		}
	}

}
