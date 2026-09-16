#include <iostream>

using namespace std;

int main() {
    int n, count=0;
    string line;
    char prev='x';

    cin >> n;
    cin >> line;

    for (int i=0; i<line.size(); i++) {
        if (prev == line[i]) count++;
        prev = line[i];
    }

    cout << count << '\n';

    return 0;
}