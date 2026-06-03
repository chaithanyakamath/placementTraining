#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> n1 = {1,2,3,0,0,0};
    vector<int> n2 = {2,5,6};
    int n = n1.size();
    int m = n2.size();
    int  p =3, q=3;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(n1[i]>n2[j]) swap(n1[i], n2[j]);
            if(n1[i]==0){
                swap(n1[i], n2[j]);
                j++;
            }
        }
    }
    // reverse(n1.begin(), n1.end());
    for(int n : n1) cout << n << endl;

    return 0;
}