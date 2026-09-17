#include <iostream>

using namespace std;

bool isVowel(char c);

int main() {
    string s, res="";

    cin >> s;

    for (int i=0; i<s.size(); i++) {
        if (!isVowel(s[i])) {
            res += (string(".", 1) + (char) tolower(s[i]));
        }
    }

    cout << res << '\n';

    return 0;
}

bool isVowel(char c) {
    c = tolower(c);

    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}