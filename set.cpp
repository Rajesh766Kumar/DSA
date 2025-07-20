#include<iostream>
using namespace std;
#include<set>
#include<unordered_set>
int main(){
    unordered_set<string>s1{"pen", "ersaer", "pencil", "Sharpner"};
    for (auto k:s1)
    {
     
    cout<<k<<"\n";
    }

    multiset<int>s;
    s.insert(23);
    s.insert(24);
    s.insert(98);
    s.insert(78);
    for(auto p:s)
    {
        cout<<p<<"\n";
    }
    auto p=s.find(23);
    if(p!=s.end())
    {
        s.erase(p);
    }
    else{
        cout<<"not found";

    }
    cout<<"\n after del\n";
    for (auto p:s)
    {
     cout<<p<<"\n";
    }
}