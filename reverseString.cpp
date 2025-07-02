//  1 reverse string

// #include <iostream>
// #include <algorithm>
// #include <string> 

// using namespace std;

// int main() {
//     string a;
//     cout << "Enter a string: ";
//     getline(cin, a);

//     reverse(a.begin(), a.end());
//     cout << "Reversed string: " << a << endl;

// }


// 2 replace each letter with the next in the alphbet.

// #include <iostream>
// #include<string>
// using namespace std;
// int main (){
//     string i;
//     cout<<"Enter a string: ";
//     getline(cin, i);

//     for (char &ch : i) {
//         if (isalpha(ch)) {
//             if (ch == 'z') ch = 'a';
//             else if (ch == 'Z') ch = 'A';
//             else ch++;
//         }
//     }
//     cout<<"modified string :"<<i<<endl;
// }



//3 