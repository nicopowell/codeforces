#include <iostream>

using namespace std;

int main() {
    short int n;
    string word;

    cin >> n;

    // Read and process
    for (int i=0; i<n; i++){
        cin >> word;
        if (word.size() <= 10) {
            cout << word;
        } else {
            cout << string(1, word[0]) + to_string(word.size()-2) + word[word.size()-1];
        }
        cout << '\n';
    }
    return 0;
}