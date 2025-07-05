// coding round 
// Q1. Swapping First and last charactor form each word in a Sentence .
// input "Quality on time "
// output yualitq no emit

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int start = 0;
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            if (i - start > 1)
                swap(s[start], s[i - 1]);
            start = i + 1;
        }
    }

    cout << s;
    return 0;
}

