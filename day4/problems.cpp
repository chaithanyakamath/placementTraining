#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //1
    // string ip = "the sky is blue";
    // stringstream ss(ip);
    // string word;
    // string ans, res;

    // while(ss >> word){
    //     ans = word;
    //     res = ans + " " + res;
    // }

    // cout << res << endl;

    //2
    // string s = "abaaba"; reapeating substr

    //3
    string s = "pwwkew";
    int n = s.length();
    unordered_map<char, int> mp;
    int length = 0, ans = 0;
    int l = 0;

    for(int r=0; r<n; r++){
        mp[s[r]]++;
        while(mp[s[r]] > 1){
            mp[s[l]]--;
            l++;
        } 
        ans = max(ans, r-l+1);  
    }
    cout << ans;
    return 0;
}
//we need to typecast dynamic memory allocation(DMA) since it uses void as initial.
// int *c = (int *)malloc(sizeof(int)*5)
//DMA uses heap
//SSO