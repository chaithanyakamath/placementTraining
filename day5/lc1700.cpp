#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> students = {1,1,1,0,0,1};
    vector<int> sand = {1,0,0,0,1,1};

    int zcount = 0, ocount = 0;
    // int szcount = 0, socount = 0;

    for(int n : students){
        if(n==0)    zcount++;
        else ocount++;
    }
    // for(int n : sand){
    //     if(n==0)    szcount++;
    //     else    socount++;
    // }

    for(int n : sand){
        if(n==0)    zcount--;
        else ocount--;
    }
    // if(zcount != szcount)    ans = socount;    
    int ans = zcount + ocount;

    cout << ans;
    return 0;
}