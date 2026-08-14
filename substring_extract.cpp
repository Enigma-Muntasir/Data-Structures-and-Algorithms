#include <iostream>
#include <string>
using namespace std;

int main()
 {
    string str = "Sylhet Engineering College";
    string sub = "Engineering";

    int pos = -1;

    // Find the starting position of the substring
    for (int i = 0; i <= str.length() - sub.length(); i++) {
        int j;

        for (j = 0; j < sub.length(); j++) {
            if (str[i + j] != sub[j]) {
                break;
            }
        }

        if (j == sub.length()) {
            pos = i;
            break;
        }
    }

    // Delete the sub string
    if (pos != -1) {
        string result = "";

        for (int i = 0; i < str.length(); i++) {
            if (i < pos || i >= pos + sub.length()) {
                result += str[i];
            }
        }

        str = result;
    }

    cout << str;

    return 0;
}