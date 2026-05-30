#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class rectangle{
    public :
        int length, breadth;
        rectangle(int l, int b) : length(l), breadth(b) {}

        rectangle operator-(rectangle rhs){
            this->length += rhs.length; //add length
            this->breadth -= rhs.breadth; //substract breadth
            return *this;
        }
};

int main(){

    rectangle r1(8,5);
    rectangle r2(6,2);
    rectangle r3 = r1-r2;

    cout << r3.length << endl;
    cout << r3.breadth;
    return 0;
}
