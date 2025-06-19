    // Bubbles sort

// #include<iostream>
// using namespace std;
// void bubbles(int arr[], int s){
//     int tmp, c=0;
//     bool d;

//     for (int i=0; i <s; i++){
//         d=false;
//         for(int j=0; j <s-i-1; j++){
//             c++;
//             if(arr[j] > arr [j+1] ){
//                 tmp= arr[j+1];
//                 arr[j+1]= arr[j];
//                 arr[j]=tmp;
//                 d=true;
//             }
//         }
//         cout<<"counter hit="<<c<<"\t";
//     }
// }
// int main(){
//     int s;
//     cout<<"Enter size of value";
//     cin>>s;


//     int arr[s];
//     cout<<"Enter "<<s<<"value\n";
//     for (int i=0; i<s; i++){
//         cin>>arr[i];
//     }

//     bubbles (arr, s);
//     cout<<"after\n";
//     for (int i=0; i<s; i++){
//         cout<<arr[i]<<"\t";
//     }
// }

    // selection sort

#include<iostream>
using namespace std;
int power(int b, int p){
    if (p==0)
    {
        return 1 ;
    }
    if (b==1)
    {
        return 1 ;
    }
    
    int k;
    k=b*power(b, p -1);
    return k;


    
} 
int main(){
    int b, p;
    cout<<"Enter base:\n";
    cin>>b;
    cout<<"Enter base:\n";
    cin>>p;
    cout<<power(b,p);
}

