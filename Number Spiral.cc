#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long y, x;
        cin >> y >> x;
        long long result;
        
        if (y > x) {
            if (y % 2 == 0) {
                result = y * y - x + 1;
            } else {
                result = (y - 1) * (y - 1) + x;
            }
        } else {
            if (x % 2 == 1) {
                result = x * x - y + 1;
            } else {
                result = (x - 1) * (x - 1) + y;
            }
        }
        
        cout << result << endl;
    }
    return 0;
}
