// Recursion 

#include<iostream>
using namespace std;

int fact (int a ){
    if (a==1){
        return  1;

    }
    int ans = a*fact(a-1);
    return ans;
    
}

int main (){
    int a; 
    cout<<"Enter any number\n";
    cin>>a;
    cout<< fact(a);
}



// enter any number 5
// output 120   recursion tree me  
