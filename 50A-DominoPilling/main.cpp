#include <iostream>

using namespace std;

int main() {
    int M, N, count;

    cin >> M >> N;

    if (M < 2 && N < 2) count = 0;
    else {
        count = M/2*N;
        if (M % 2 != 0) count += N/2;
    }

    cout << count << '\n';
    return 0;
}