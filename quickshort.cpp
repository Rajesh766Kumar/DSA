#include<iostream>
using namespace std;

int part(int arr[], int low, int high) {
    int pv = arr[low];  // Pivot
    int i = low + 1;
    int j = high;
    int tmp;

    do {
        while (i <= high && arr[i] < pv) {
            i++;
        }

        while (j >= low && arr[j] > pv) {
            j--;
        }

        if (i < j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    } while (i < j);

    tmp = arr[low];
    arr[low] = arr[j];
    arr[j] = tmp;

    return j;
}

void qksort(int arr[], int low, int high) {
    if (low < high) {
        int pvt = part(arr, low, high);
        qksort(arr, low, pvt - 1);
        qksort(arr, pvt + 1, high);
    }
}

int main() {
    int arr[] = {4, 3, 8, 6, 3,};
    int s = sizeof(arr) / sizeof(arr[0]);

    qksort(arr, 0, s - 1);    

    cout << "Sorted array:\n";

    for (int i = 0; i < s; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}
