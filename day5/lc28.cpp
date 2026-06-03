#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string big = "asofnowsadlifehere";
    string small = "sadd";

    int n = big.size();
    int m = small.size();

    // for(int i=0; i<n; i++){
    //     if(big.find(small,i) == i){
    //         ans = i;
    //         break;
    //     } 
    // }
    
    int pos = big.find(small);

    cout << pos ;
    return 0;
}