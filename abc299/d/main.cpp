#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int left = 1;
    int right = N;

    char prev_val;
    cout << "? " << left << endl;
    cin >> prev_val;

    int attempts = 19;
    while (attempts--) {
        int mid = (left + right) / 2;
        char cur_val;
        cout << "? " << mid << endl;
        cin >> cur_val;

        if (cur_val != prev_val) {
            cout << "! " << mid << endl;
            break;
        }

        if (cur_val == '0') {
            left = mid;
            prev_val = cur_val;
        } else {
            right = mid;
        }
    }

    return 0;
}
