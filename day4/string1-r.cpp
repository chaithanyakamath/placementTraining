#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string substr(int start, int end, string str){
      string ans ="";
      for(int i=start; i<end; i++) ans+=str[i];
      
      return ans;
}

int main(){

    // string name;
    // string dept;
    // string classnum;

    // cout << "Enter your name, dept n classnum" << endl;
    // cin >> name >> dept >> classnum;

    // getline(cin,name);
    // getline(cin,dept);
    // getline(cin,classnum);
    // cout << "name" << name << endl;
    // cout << "dept" << dept << endl;
    // cout << "classnum" << classnum << endl;

    string big = "qwertyuiopasdfghjklzxcvbnm";
    string res = substr(3,17,big);
    cout << res << endl;  

    return 0;
}