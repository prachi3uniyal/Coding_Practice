// Reverse string (Leetcode)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void reverseString(vector<char>& s) {
    int len = s.size();
    if (len >= 1 && len <= 100000) {
        for (int i = len - 1; i >= 0; i--) {
            cout << s[i];
            if (i != 0) {
                cout << ",";
            }
        }
    }
}

int main() {
    cout << "Enter a string: ";
    string input;
    getline(cin, input);
    vector<char> myString(input.begin(), input.end());

    reverseString(myString);

    return 0;
}
