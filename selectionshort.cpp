#include<iostream>
using namespace std;

int main() {
    int arr[] = {5, 4, 5, 5, 6};
    int s = sizeof(arr) / sizeof(arr[0]);  
    
    cout << "Before selection sort:\n";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

                                         
    for (int i = 0; i < s; i++) {
        int chhotu = i;
        for (int j = i + 1; j < s; j++) {
            if (arr[chhotu] > arr[j]) {
                chhotu = j;
            }
        }

        if (chhotu != i) {
            int swp;
            swp = arr[chhotu];
            arr[chhotu] = arr[i];
            arr[i] = swp;
        }
    }

    cout << "After selection sort:\n";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}
