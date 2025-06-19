#include<iostream>
using namespace std;
void table(int number, int i){
    if (i>10)
    return ;

    cout<<number<< "*" <<  i << "=" << number * i<<endl;
    table(number, i+1);
}
int main(){
    int num ;
    cout <<"Enter to print its table\n";
    cin>>num;
    
    table(num, 1);

    
    
    return 0;
}   