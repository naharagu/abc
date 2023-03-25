#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

// int main()
// {
// 	string s;
// 	cin >> s;

// 	int ans = 0;
// 	int len_window = 2;

// 	while (len_window <= (int)s.size())
// 	{
// 		vector<int> digit(10, 0);

// 		for (int i = 0; i < len_window; i++)
// 			digit[s[i] - '0']++;

// 		for (int j = 0; j + len_window <= (int)s.size(); j++)
// 		{
// 			bool is_happy = true;
// 			for (int digit_count: digit)
// 			{
// 				if (digit_count % 2 != 0)
// 				{
// 					is_happy = false;
// 					break;
// 				}
// 			}
// 			if (is_happy)
// 				ans++;
// 			if (j + len_window < (int)s.size())
// 			{
// 				digit[s[j] - '0']--;
// 				digit[s[j + len_window] - '0']++;
// 			}
// 		}
// 		len_window += 2;
// 	}

// 	cout << ans << endl;
// }

int main() {
    string S;
    cin >> S;

    int ans = 0;
    int length = S.size();
    vector<vector<int>> count(length + 1, vector<int>(10, 0));

    for (int i = 0; i < length; i++) {
        count[i + 1] = count[i];
        count[i + 1][S[i] - '0']++;
    }

    for (int len = 2; len <= length; len += 2) {
        for (int l = 0; l + len <= length; l++) {
            bool is_happy = true;
            for (int d = 0; d < 10; d++) {
                if ((count[l + len][d] - count[l][d]) % 2 != 0) {
                    is_happy = false;
                    break;
                }
            }
            if (is_happy) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}