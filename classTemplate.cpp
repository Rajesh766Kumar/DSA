// #include<iostream>     // iostream is the header for input-output
// using namespace std;

// template <class obj>
// class job {
//     obj v;
//                         //constorter
// public: job(obj val) {
//          v = val;
//          cout << "val = " << v << endl;
//     }
// };

// int main() {
//     job<float> j(18);
//     return 0;
// }


// duble value


#include<iostream>
using namespace std;

template <class obj, class obj2>
class job {
    obj v1;
    obj2 v2;

public:
                                    // Constructor
    job(obj vall, obj2 val2) {
        v1 = vall;
        v2 = val2;
        cout << "val = " << v1 + v2 << endl;
    }

    // Member function to show values
    void show() {
        cout << "value of v1 = " << v1 << "\n";
        cout << "value of v2 = " << v2 << endl;
    }
};

int main() {
    job<float, float> j(18.3, 12.5);
    j.show();

    return 0;
}
