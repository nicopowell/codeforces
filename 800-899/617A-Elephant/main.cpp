#include <iostream>

using namespace std;

int main() {
    int x, step=5, stepcount=0;

    cin >> x;

    while(x != 0) {
        if (step <= x) {
            x -= step;
            stepcount++;
        } else {
            step--;
        }
    }

    cout << stepcount << '\n';

    return 0;
}