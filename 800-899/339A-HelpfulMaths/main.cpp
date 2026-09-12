#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string line;
    vector<char> vec;
    

    cin >> line;

    for (int i=0; i<line.size(); i=i+2) {
        vec.push_back(line[i]);
    }

    sort(vec.begin(), vec.end());

    for (int i=0; i<vec.size(); i++) {
        if (i > 0) cout << "+";
        cout << vec[i];
    }

    cout << '\n';

    return 0;
}