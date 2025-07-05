// #include<iostream>          //.............pair and tuple..............///
// using namespace std;
// int main (){
//     pair <string, float>p;
//    p.first="Rajesh";
//    p.second=7.3;
//    cout<<"name="<<p.first<<"\t";
//    cout<<"Age="<<p.second<<"\t";


// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<pair<string, float>> v;
//     int s;
//     float cgpa;
//     string Name;

//     cout << "Enter how many records: ";
//     cin >> s;

//     for (int i = 0; i < s; i++) {
//         cout << "Enter Name: ";
//         cin >> Name;
//         cout << "Enter CGPA: ";
//         cin >> cgpa;
//         v.push_back({Name, cgpa});
//     }

//     cout << "\nOutput of vector:\n";
//     for (int i = 0; i < s; i++) {
//         cout << v[i].first << "\t" << v[i].second << "\n";
//     }

//     return 0;
// }



#include<iostream>
#include<vector>
#include <tuple> 
using namespace std;
int main(){
    tuple<int ,string, int>Student;
    int rno, year;
    string name;
    cout<<"Enter roll no\n";
    cin>>get<0>(Student);
    cout<<"enter name\n";
    cin>>get<1>(Student);
    cout<<"Enter year\n";
    cin>>get<2>(Student);
    cout<<"rollno="<<get<0>(Student)<<"\n";
    cout<<"name="<<get<1>(Student)<<"\n";
    cout<<"passing year="<<get<2>(Student)<<"\n";


}