#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// class fruit{
//     public:
//         int apple;
//         fruit(int value) : apple(value) {}
// };

class Complex{
    public:
        int real;
        float img;
        Complex(int val1, float val2): real(val1), img(val2) {}

        Complex& operator+(Complex& rhs){
            this->real +=  rhs.real;
            this->img += rhs.img;
            return *this;
        }
};

int main(){
    // fruit d(5);
    // cout << d.apple;
    Complex n1(5,3.5);
    Complex n2(7, 1.1);
    Complex n3 = n1+n2;

    // cout << n1.real << endl;
    // cout << n1.img << endl;
    cout << n3.real << endl;
    cout << n3.img;

    return 0;
}
//constructor destructor, copy constructor, copy assisgnment