#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string word; cin >> word;

    int length = word.size(), lowers = 0, uppers = 0;
    for (int i = 0; i < length; ++i) {
        if (islower(word[i])) {
            lowers++;
        }
        else {
            uppers++;
        }
    }
    
    if (lowers < uppers) {
        for (char& character : word) {
            character = toupper(character);
        }
    }
    else {
        for (char& character : word) {
            character = tolower(character);
        }
    }

    cout << word;
    return 0;
}
