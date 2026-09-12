#include <iostream>

using namespace std;

int main() {
    short int n, x=0;
    string line;

    cin >> n;
    
    for (int i=0; i<n; i++) {
        cin >> line;
        
        if (line[1] == '+') x++;
        else x--;
    }

    cout << x;
    cout << '\n';

    return 0;
}