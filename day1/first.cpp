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
    // cout << 2++ << endl; lvalue error 
    cout << sizeof(a)   << endl;
    cout << sizeof(x)   << endl;
    cout << sizeof(s)   << endl;
    cout << sizeof(st)   << endl;

    int num = 12321;
    int curr = num;
    int rev = 0;
    while(num > 0){ // for n while condn depends on true/false value not any int value
        int d = num%10;
        rev = rev*10 + d;
        num /= 10;
    }
    // cout << rev << " " << curr << endl;
    cout<< (curr == rev)? "true":"false";

    if(cout << curr)    cout << " " << rev;

    int w;
    if(cin>>w)  cout<<5*w;

    return 0;
}

//learncpp.com
//hft
//operator precedence