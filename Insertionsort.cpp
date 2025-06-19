// #include<iostream>
// using namespace std;
// int   main(){
//     int arr []={1, 2, 3, 4, 5};
//     int s= sizeof(arr)/sizeof(arr[0]);
    
//     for(int i=0; i<s; i++);
//     {
//         cout<< arr[i] <<"\t";
//     }

//     int c= 0;
//     for (int i=1; i<s; i++)
//     {
//         int mins =i;
//         while(mins>0 && arr [mins]<arr[mins-1]){
    
//     c++;
//     int sp;
//     sp =arr[mins];
//     arr[mins] = arr [mins-1];
//     arr[mins-1]=sp;
//     mins--;
//     }
// }
// cout<<"\n counter="<<c;

// cout<<"\n after insertion sort \n";
// for (int i=0; i<s; i++);
// {
//     cout<<arr[i]<<"lt";
// }
// }



#include<iostream>
using namespace std;

int main() {
    int arr[] = {6,8,4,3,9,2};
    int s = sizeof(arr) / sizeof(arr[0]);

    // Print original array
    cout << "Before sorting:\n";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << "\t";
    }

    int c = 0;

    // Insertion Sort Logic (Your style)
    for (int i = 1; i < s; i++) {
        int mins = i;
        while (mins > 0 && arr[mins] < arr[mins - 1]) {
            c++; // count swaps
            int sp;
            sp = arr[mins];
            arr[mins] = arr[mins - 1];
            arr[mins - 1] = sp;
            mins--;
        }
    }

    cout << "\nCounter = " << c;

    // Print sorted array
    cout << "\nAfter insertion sort:\n";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}
