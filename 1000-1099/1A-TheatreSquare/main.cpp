#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, m, a;

    string hola;

    cin >> n >> m >> a;

    cout << (long long) (ceil(n / (double) a) * ceil(m / (double) a)) << '\n';

    return 0;
}