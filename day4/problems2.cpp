#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool chk(string s){
    int n = s.size();
    int l = 0, r = n-l;

    while(l<r){
        while(!isalnum(l) && l<r) l++;
        while(!isalnum(r) && l<r) r--;
        
        if(tolower(s[l]) != tolower(s[r])) return false;
        l++;
        r--;
    }
    return true;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    
    int ans = chk(s);
    cout << ans ;
    return 0;
}