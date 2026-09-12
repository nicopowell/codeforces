#include <iostream>
#include <set>

using namespace std;

int main() {
    string s;
    set<char> letters;

    cin >> s;

    for (char c : s) {
        letters.insert(c);
    }

    if (letters.size() % 2 == 0) cout << "CHAT WITH HER!" << '\n';
    else cout << "IGNORE HIM!" << '\n';

    return 0;
}