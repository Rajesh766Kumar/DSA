#include<iostream>
using namespace std;
int power(int b, int p){
    if (p==0)
    {
        return 1;
    }
    if (b==1)
    {
        return 1;
    }
    

    int k;
    k=b*power(b,p -1);
    return k;

}

   int main (){
    int b, p;
    cout<<"Enter base\n";
    cin>>b;
    cout<<"Enter power\n";
    cin>>p;
    cout<<power(b,p);
   }


   