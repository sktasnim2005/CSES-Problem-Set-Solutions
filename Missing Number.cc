#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;

    long long current_sum = 0;
    for (long long i = 0; i < n - 1; i++) {
        long long num;
        cin >> num;
        current_sum += num;
    }

    cout << sum - current_sum << endl; // Missing number
    return 0;
}
