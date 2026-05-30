#include<iostream>
#include<string>

using namespace std;

int main(){
    cout << "choose:\n 1.Register\n 2.Login\n 3.Admin Login\n 4.Logout\n 5.Exit\n";
    int choice ;
    cin >> choice;

    switch(choice){
        case (1):
        {
            string name, password;
            cout << "provide name and password to register"<<endl;
            cin >> name >> password;
            cout << "Registered with given details"<<endl;
            break;
        }
        case (2):
        {
            string name, password;
            cout << "provide name and password to login"<<endl;
            cin >> name >> password;
            cout << "logged in successfully"<<endl;
            break;
        }
        case (3):
        {
            string adname, adpassword;
            cout << "provide admin details to login"<<endl;
            cin >> adname >> adpassword;
            cout << "Admin logged in successfully"<<endl;
            break;
        }
        case (4):
        {
            string name, password;
            cout << "Logged out Successfully"<<endl;
            break;
        }
        case (5):
        {
            cout << "Exit";
            break;
        }
        case(-1):{
            cout << "enter valid choice";     
        }  
    }
    return 0;
}