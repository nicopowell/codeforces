#include <iostream>
#include <vector>

using namespace std;

int main() {
    short int n, k, count=0, threshold;

    cin >> n >> k;

    vector<int> scores(n);


    for (int i=0; i<n; i++) {
        cin >> scores[i];
    }

    threshold = scores[k-1];

    for (int score : scores) {
        if (score > 0 && score >= threshold) count++;
        else break;
    }

    cout << count << '\n';
    
    return 0;
}