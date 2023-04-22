#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;


int main() {
    int n;
    string s;
    cin >> n >> s;

    int pipe_count_before = 0;
    int pipe_count_after = 0;
    bool found_star = false;

    for (char c : s) {
        if (c == '|') {
            if (found_star) {
                pipe_count_after++;
            } else {
                pipe_count_before++;
            }
        } else if (c == '*') {
            found_star = true;
        }
    }

    if (pipe_count_before >= 1 && pipe_count_after >= 1) {
        cout << "in" << endl;
    } else {
        cout << "out" << endl;
    }
    return 0;
}