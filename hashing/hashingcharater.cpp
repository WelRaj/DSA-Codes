#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int hash[26] = {0};

    // Populate the hash array
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') { // Ensure the character is a lowercase letter
            hash[s[i] - 'a']++;
        }
    }

    cout << "Enter number of queries (q): ";
    int q;
    cin >> q;

    while (q--) {
        char c;
        cout << "Fetch character: ";
        cin >> c;

        if (c >= 'a' && c <= 'z') { // Check if input is a valid lowercase letter
            cout << hash[c - 'a'] << endl;
        } else {
            cout << "Invalid character. Please enter a lowercase letter." << endl;
        }
    }

    return 0;
}
