//    last me sabse bada word aaye 

#include<iostream>
using namespace std;
int main (){
    string s = "what is opinion about Programming ";
    string b, str;
    cout << s << "\n";

    // Step 1: pehla word nikal rahe ho — sahi hai
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            b.push_back(s[i]);
        } else {
            break;
        }
    }

    cout << "backup\n";
    for (int i = 0; i < b.size(); i++) {
        cout << b[i];
    }

    // Step 2: ab longest word dhoondhna hai
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            str.push_back(s[i]);  // ab word ban raha hai
        } else {
            if (str.size() > b.size()) {
                b = str;
            }
            str.clear();  // har space ke baad word reset
        }
    }

    // last word check karna zaroori hai (agar end me space na ho to)
    if (str.size() > b.size()) {
        b = str;
    }

    cout << "\nfinal output\n" << b;
}

