#include<iostream>
using namespace std; //std contains c++ keywords

int main(){
    int a {10}; //list initialization
    int b (2.0); //direct initialization
    int sum = a+b; //copy initialization
    string s;
    string st {"chaithanya kamath"};
    int x = 2.5;
    float y = 2.5f; // Precision has more 
    
    int p=54, q=23; //boolean can also hold integer vaue
    cout << p << endl;
    cout << p++ + ++q  << endl; //temp obj is created to store n return value

    cout << sum << endl;
    cout << y << endl;
    cout << x+y << endl;
    // cout << 2++ << endl;
    cout << sizeof(a)   << endl;
    cout << sizeof(x)   << endl;
    cout << sizeof(s)   << endl;
    cout << sizeof(st)   << endl;

    return 0;
}

//learncpp.com
//hft
//operator precedence