#include<iostream>
using namespace std;

void bubbles (int arr[],int s){
   int tmp, c= 0;
   bool d;

   for (int i=0;i < s; i++){
     d = false;
    for (int j= 0; j< s -i-1; j++){
        c++;
        if (arr[j] > arr[j+1]){
            tmp = arr [j+1];
            arr[j+1]=arr[j];
            arr[j]=tmp;
            d=true;
        }
    }
    if (!d){
        break;
    }
   }
   cout<<"\n counter hit=" << c << "\n";

 }
 int main(){
    int s;
    cout<<"Enter size if array";
    cin >> s;

    int arr[s];
    cout<<"enter" << s <<  "value\n";
     for (int i=0; i < s; i++){
        cin >> arr[i];
    }


    bubbles(arr,s);

    cout<<"After:\n";
    for (int i=0; i < s ; i++){
        cout<<arr[i]<<"\t";
    }
    }
