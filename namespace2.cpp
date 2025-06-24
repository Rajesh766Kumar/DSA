#include<iostream>
using namespace std;

namespace cybrome
{
    int a = 90;
    int b = 20;

    void multiply() {
        cout << "multiply = " << a * b << endl;
    }

    class bhopal {
    public:
        int k1, k2;
    };
}

using namespace cybrome;

int main() {
    cout << a + b << "\n";

    multiply();

    bhopal obj;
    obj.k1 = 300;

    cout << "\nvalue of k1 = " << obj.k1;
    cout << "\n";
    cout << b;

    return 0;
}
