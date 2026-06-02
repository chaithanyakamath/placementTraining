#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string substr(int start, int end, string str){
      string ans ="";
      for(int i=start; i<end; i++) ans+=str[i];
      
      return ans;
}

int sizze(string str){
    int length = 0;
    for(char c : str)   length++;
    if(length == 0) return -1;

    return length;
}

int findd(string big, string small){
    int n = big.size();
    int m = small.size();
    for(int i=0; i<=(n-m); i++){
        int j;
        for(j=0; j<m; j++){
            if(big[i+j] != small[j]) break; 
        }
        if(j == m)  return i;
    }
    return -1;
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

    // string empty = "";
    // string res = substr(3,17,big);
    // int len = sizze(empty);
    // int lenn = sizze(big);

    // cout << res << endl;
    // cout << (len==-1 ? "Empty string" : to_string(len)) << endl; // both shld be of same data type  
    // cout << (lenn==-1 ? "Empty string" : to_string(lenn)) << endl;
    
    string big = "qwertyuiopasdfghjklzxcvbnm";
    string small = "pasd";
    int findD = findd(big, small);

    cout << "found at " << (findD == -1 ? -1 : findD) << endl;


    return 0;
}

