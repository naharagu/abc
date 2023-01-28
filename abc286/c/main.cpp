#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

bool isPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;

    while (h > l)
        if (str[l++] != str[h--])
            return false;

    return true;
}

ll count_not_Palindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;
	ll res = 0;

    while (h > l)
        if (str[l++] != str[h--])
			res++;
    return res;
}


ll get_min_RotationOfPalindrome(string str)
{
    if (isPalindrome(str))
        return 0;

    int n = str.length();
	ll res = INT_MAX;

    for (int i = 0; i < n - 1; i++) {
        string str1 = str.substr(i + 1, n - i - 1);
        string str2 = str.substr(0, i + 1);
		// cout << count_not_Palindrome(str1.append(str2)) << endl;

		res = min(res, count_not_Palindrome(str1.append(str2)));
    }
    return res;
}

ll get_index_RotationOfPalindrome(string str)
{
    if (isPalindrome(str))
        return 0;

    ll n = str.length();
	ll small = count_not_Palindrome(str);
	// cout << small << endl;
	ll res = n - 1;

    for (ll i = 0; i < n - 1; i++) {
        string str1 = str.substr(i + 1, n - i - 1);
        string str2 = str.substr(0, i + 1);

		if (small > count_not_Palindrome(str1.append(str2)))
		{
			small = min(small, count_not_Palindrome(str1.append(str2)));
			res = min(res, i + 1);
			// cout << res << endl;
			res = min(res, abs(n - res - 1));
			// cout << res << endl;
		}
    }
    // return min(res, abs(n - res - 1));
	return res;
}

int main()
{
	ll n, a, b;
	cin >> n >> a >> b;
	string s;
	cin >> s;

	if (isPalindrome(s))
	{
		cout << 0 << endl;
		return 0;
	}

	ll ans1 = n / 2 * b;
	ll ans2 = get_min_RotationOfPalindrome(s) * b + get_index_RotationOfPalindrome(s) * a;
	ans1 = min(ans1, ans2);
	cout << ans1 << endl;

	// cout << get_min_RotationOfPalindrome(s) << endl;
	// cout << get_index_RotationOfPalindrome(s) << endl;
}