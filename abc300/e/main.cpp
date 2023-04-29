#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

ll mod = 998244353;

long long mod_pow(long long a, long long n, long long m) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) {
            res = res * a % m;
        }
        a = a * a % m;
        n >>= 1;
    }
    return res;
}

int main() {
    long long n;
    cin >> n;

    long long ans = 0;
    for (int i = 1; i <= 6; ++i) {
        if (n % i == 0) {
            ans += mod_pow(6, n / i - 1, mod);
            ans %= mod;
        }
    }
    ans = ans * mod_pow(6, mod - 2, mod) % mod;

    cout << ans << endl;
}
