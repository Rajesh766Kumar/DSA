#include<iostream>
using namespace std;
 class cybrom
 {
  
    public: int  *arr;
    int n, top;
    cybrom (int a)
    {
        n=a;
        arr=new  int [n];
        top=-1;

    }
    void push (int v)
    {
        if (top == -1) {
        cout << "\nUnderflow\n";
        return -1;
    }
        return arr[top];

    }
    void pop ()
    {
      if (top==-1)
      {
        cout <<"\n There is no data";
        return;

      }
      top--1;

    }
 };
 int main (){
    cout<<"enter size of array\n";
    cin>>s;
    cybrom c(s);
    c.push(12);
    c.push(45);
    c.push(8);
    while ((c.top!=-1)
    {
        cout<<c.tops()<<"\n";
        c.pop();

    }
   while(c.top!=-1)
   {
    cout<,c.tops()<<"\n";
    c.pop();
    
   }
    
 }