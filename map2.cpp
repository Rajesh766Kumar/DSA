#include<iostream>
using namespace std;
#include<map>
int main(){
   int n1;
string s;
cout<<"Enter how may cousre \n";
cin>>n1;
map<string, int>map;
for(int i=0; i<n1; i++){
    cout<<"Enter course name\n";
    cin>>s;
    map[s]++;

}
 for (auto p:map){
    cout<<p.first<<"="<<p.second<<"\n";
 }
}
