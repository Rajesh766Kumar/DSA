// map is called asscioative contain .
// it is having key and value pair 
// it is store the data is accending order by defult

#include<iostream>
using namespace std;
#include<map>
int main(){
 
    map<int , string>m;
    m[101] = "rajesh";
    m.insert({102, "sunny"});
     m.insert(make_pair(103, "Ravi"));
     m[99];
     for (auto p:m){
        cout<<p.first<<","<<p.second<<"\n";

     }
     auto j=m.find(103);
     if(j!=m.end()){
        m.erase(j);

     }
     else{
        cout<<"not found";
        
     }
     for (auto p:m){
   cout << "maxsize = "  <<" max-size" << "\n";
      cout<<"\nafter delection \n";
      cout<<p.first<<","<<p.second<<"\n";
   }
}     