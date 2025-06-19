// Print for table 

#include<iostream>
using namespace std;

void msg (int a){
    if (a==0)
    {
        return;
    }

    msg(a-1);
    cout<<a<<"\n";    
}

int main(){
    int a;
    cout<<"Enter the value:";
    cin>>a;
    msg(a);
}
