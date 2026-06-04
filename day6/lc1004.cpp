#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v = {1,1,1,0,0,0,0,1,0,1};
    // int k = 3;
    // int n = v.size();
    // int l = 0, r = 0;
    // int count = 0, ans = INT_MIN;

    // while(r<n){
    //     if(v[r]==0) count++;
    //     if(count > k){
    //         if(v[l] == 0)   count--;
    //         l++;  
    //     }
    //     ans = max(ans, r-l+1);
    //     r++;
    // }

    vector<int> v = {1,1,1,0,0,0,1,1,1,1,0};
    int n = v.size();
    int k = 2;

    int l = 0, r = 0;
    int count = 0, ans = INT_MIN;

    while(r<n){
        if(v[r]==0) count++;
        if(count > k){
            if(v[l] == 0)   count--;
            l++;
        }
        ans = max(ans, r-l+1);
        r++;
    }
    cout << ans;
    return 0;
}