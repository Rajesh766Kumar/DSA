// coding round 
// Q1. Swapping First and last charactor form each word in a Sentence .
// input "Quality on time "
// output yualitq no emit

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s);

//     int start = 0;
//     for (int i = 0; i <= s.length(); i++) {
//         if (i == s.length() || s[i] == ' ') {
//             if (i - start > 1)
//                 swap(s[start], s[i - 1]);
//             start = i + 1;
//         }
//     }

//     cout << s;
//     return 0;
// }



//(Q2) Rotate Matrix anti clock wise 90deg.
  //123   369
  // 456  258
  // 789  147


  
  #include<iostream>
  using namespace std;
  
  int main() {
      int mat[3][3] = {
          {1, 2, 3},
          {4, 5, 6},
          {7, 8, 9}
      };
  
      // Step 1: Transpose
      for(int i = 0; i < 3; i++) {
          for(int j = i; j < 3; j++) {
              swap(mat[i][j], mat[j][i]);
          }
      }
  
      // Step 2: Reverse columns (i.e. reverse each row for anti-clockwise)
      cout << "Rotated matrix (90 anti-clockwise):\n";
      for(int j = 2; j >= 0; j--) {
          for(int i = 0; i < 3; i++) {
              cout << mat[i][j] << " ";
          }
          cout << endl;
      }
  
      return 0;
  }
  