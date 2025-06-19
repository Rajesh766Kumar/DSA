#include<iostream>
using namespace std;

void show(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
    arr[i] = arr[i] + 2;
    }
}

int main() {
    int arr[5] = {7, 2, 9, 6, 4};
    show(arr);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}
