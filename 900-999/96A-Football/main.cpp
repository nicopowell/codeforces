#include <iostream>

using namespace std;

int main() {
    string s;
    int count = 1, max = 1;

    cin >> s;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
            if (count > max) max = count;
        } else {
            count = 1;
        }
    }

    if (max >= 7) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}