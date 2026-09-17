#include <iostream>

using namespace std;

void toLower(string &s);
void toUpper(string &s);

int main() {
    string s;
    int lower=0, upper=0;

    cin >> s;

    for(int i=0; i<s.size(); i++) {
        if ('A' <= s[i] && s[i] <= 'Z') upper++;
        else lower++;
    }

    if (lower >= upper) toLower(s);
    else toUpper(s);

    cout << s << '\n';

    return 0;
}

void toLower(string &s) {
    for (int i=0; i<s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}

void toUpper(string &s) {
    for (int i=0; i<s.size(); i++) {
        s[i] = toupper(s[i]);
    }
}