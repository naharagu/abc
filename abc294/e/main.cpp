#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
    ll l, n1, n2;
    cin >> l >> n1 >> n2;

    vector<pair<ll, ll>> compressed1(n1);
    vector<pair<ll, ll>> compressed2(n2);

    for (ll i = 0; i < n1; i++)
        cin >> compressed1[i].first >> compressed1[i].second;
    for (ll i = 0; i < n2; i++)
        cin >> compressed2[i].first >> compressed2[i].second;

    ll ans = 0;
    ll i = 0;
	ll j = 0;
    while (i < n1 && j < n2)
	{
        if (compressed1[i].first == compressed2[j].first)
            ans += min(compressed1[i].second, compressed2[j].second);

        if (compressed1[i].second < compressed2[j].second)
		{
            compressed2[j].second -= compressed1[i].second;
            i++;
        }
		else
		{
            compressed1[i].second -= compressed2[j].second;
            j++;
        }
    }

    cout << ans << endl;
}