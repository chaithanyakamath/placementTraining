#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //1
    // vector<int> v = {1,2,3,4,5,8};
    // int n = v.size();
    // int r = n-1, l = 0;
    // int k =3;
    // int count = 0;

    // while(l<r){
    //     int temp = v[l];
    //     v[l] = v[r];
    //     v[r] = temp;
    //     l++;
    //     r--;
    // }
    // 1 2 3 4 5 8
    // 8 5 4 3 2 1
    // 4 5 8 -3 2 1
    // 4 5 8 - 1 2 3

    // k = k % n ;
    // reverse(v.begin(), v.end());
    // reverse(v.begin(), v.begin()+k);
    // reverse(v.begin()+k, v.end());

    // for(int n : v)  cout << n << endl;

    //2
    //remove duplicates in place such that each unique elements appears only once maintain the relative order

    vector<int> v = {1,2,2,2,3,3,5,5,8,8,9};
    int n = v.size();
    int idx = 1;
    for(int i=1; i<n; i++){
        if(v[i] != v[i-1])    v[idx++] = v[i];
    }
    for(int n : v)  cout << n << " ";
    return 0;
}