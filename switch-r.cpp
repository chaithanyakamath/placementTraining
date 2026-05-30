#include<iostream>
#include<string>
using namespace std;

string name, password;

string Register(){
    cout << "provide name and password to register"<<endl;
    cin >> name >> password;
    cout << "Registered with given details"<<endl;
    return name, password;
}

string login(){
    cout << "provide name and password to login"<<endl;
    cin >> name >> password;
    cout << "logged in successfully"<<endl;
    return name, password;
}

string adminLogin(){
    string adname, adpassword;
    cout << "provide admin details to login"<<endl;
    cin >> adname >> adpassword;
    cout << "Admin logged in successfully"<<endl;
    return adname, adpassword;
}

int main(){
    while(true){
        cout << "choose:\n 1.Register\n 2.Login\n 3.Admin Login\n 4.Logout\n";
        int choice ;
        cin >> choice;
        switch(choice){
            case (1):
            {
                Register();
                break;
            }
            case (2):
            {
                login();
                break;
            }
            case (3):
            {
                adminLogin();
                break;
            }
            case (4):
            {
                cout << "Logged out Successfully"<<endl;
                break;
            }
            default:{
                cout << "Exit";
                return 0;
                break; 
            } 
        } 
    }
    return 0;
}