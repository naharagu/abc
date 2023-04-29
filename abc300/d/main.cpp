#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

vector<bool> sieve_of_eratosthenes(int max_value)
{
	vector<bool> is_prime(max_value + 1, true);
	is_prime[0] = false;
	is_prime[1] = false;

	for (int i = 2; i * i <= max_value; i++)
	{
		if (is_prime[i])
		{
			for (int j = i * i; j <= max_value; j += i)
				is_prime[j] = false;
		}
	}
	return is_prime;
}

int count_valid_combinations(long long n)
{
	int limit = pow(n, 1.0 / 2.0);
	vector<bool> is_prime = sieve_of_eratosthenes(limit);
	vector<int> primes;

	for (int i = 2; i <= limit; i++)
	{
		if (is_prime[i])
			primes.push_back(i);
	}

	int count = 0;
	for (int i = 0; i < (int)primes.size() - 2; i++)
	{
		ll product = pow(primes[i], 2);
		if (product > n)
			continue;
		for (int j = i + 1; j < (int)primes.size() - 1; j++)
		{
			product *= primes[j];
			if (product > n)
				continue;
			for (int k = j + 1; k < (int)primes.size(); k++)
			{
				product *= primes[k];
				if (product > n)
					continue;
				product *= primes[k];
				if (product <= n)
					count++;
				else
					break;
			}
		}
	}
	return count;
}

int main()
{
	ll n;
	cin >> n;

	int ans = count_valid_combinations(n);
	cout << ans << endl;
}
