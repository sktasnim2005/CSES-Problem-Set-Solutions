#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        // Ensure a <= b
        if (a > b) swap(a, b);

        // Check if both a and b can be reduced to 0
        if ((a + b) % 3 == 0 && a * 2 >= b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}




// this may face time limit but this is main logic 
#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        bool ans = false;

        while (a >= 0 && b >= 0) {
            if (a == 0 && b == 0) {
                ans = true;
                break;
            }

            if (a >= b) {
                a -= 2;
                b -= 1;
            } else {
                a -= 1;
                b -= 2;
            }
        }

        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
