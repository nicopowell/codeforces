#include <iostream>

using namespace std;

int main() {
    int n, anton=0, danik=0;
    string s;

    cin >> n;
    cin >> s;

    for (char c : s) {
        if (c == 'A') anton++;
        else danik++;
    }

    if (anton > danik) cout << "Anton" << '\n';
    else if (danik > anton) cout << "Danik" << '\n';
    else cout << "Friendship" << '\n';

    return 0;
}