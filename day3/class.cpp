#include<iostream>
using namespace std;

class Animal{ //Parent 
    public:
        void sound(){
            cout << "Animal makes sound" << endl;
        }
};

class dog :  public Animal{ //Child
    public:
        virtual void sound(){ // to point the pointer of child class for dynamic memory allocation.
            cout << "Dog Barks" << endl;
        }
};

int main(){
    // dog d;
    // d.sound();
    // d.Animal ::sound();

    // Animal a;
    // a.sound();

    Animal *a = new dog; //dynamic memory allocation
    a->sound(); //pointer pointing to virtual func

    return 0;
}

// calling parent using child ??
// virtual func
// parent class properties will be within its children class, otherwise thry cannot inherit.
// vitual table will be created which r mapped using pointer in it, which is done by Virtual keyword in child class func's.
