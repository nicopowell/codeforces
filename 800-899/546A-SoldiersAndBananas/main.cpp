#include <iostream>

using namespace std;

int main() {
    // k ($/banana)
    // n ($ in wallet)
    // w (number of bananas)
    int k, w;
    long long n, total = 0;

    cin >> k >> n >> w;

    for (int i=1; i<=w; i++) {
        total += i * k;
    }

    cout << ((total - n > 0) ? total - n : 0) << '\n';

    return 0;
}