#include<iostream>
#include<vector>
using namespace std;

template<typename T>
T sum(T a, T b){ //both shld be of same data type(T)
    return a+b;
};
//auto keyword is used to overcome this drawback.l

int main(){
    // cout << sum(4.3,3.0);
    int arr[] = {3,6,1,9}; // arr is a pointer variable
    cout << *arr << endl;
    cout << *arr+1 << endl;
    cout << *(arr+1) << endl;

    int *p = arr;
    int **q = &p;
    cout << sizeof(q) << endl;
    cout << sizeof(p) << endl; // size of pointer is 8, independent of data type and also hierarchy of pointers

    return 9;
}