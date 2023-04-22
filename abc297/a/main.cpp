#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> click_times(n);
    for (int i = 0; i < n; ++i) {
        cin >> click_times[i];
    }

    int first_double_click = -1;
    for (int i = 1; i < n; ++i) {
        if (click_times[i] - click_times[i - 1] <= d) {
            first_double_click = click_times[i];
            break;
        }
    }

    cout << first_double_click << endl;
    return 0;
}
