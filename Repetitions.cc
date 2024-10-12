#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int max_length = 1, current_length = 1;

    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            current_length++;
        } else {
            current_length = 1;
        }
        max_length = max(max_length, current_length);
    }

    cout << max_length << endl;
    return 0;
}
