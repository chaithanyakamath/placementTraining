#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // 1
    // vector<int> arr = {3,6,9,12};
    // int target = 15;

    // int l = 0, r = arr.size()-1;
    // int sum = 0;
    // vector<int> ans;

    // while(l<=r){
    //     sum += arr[l] + arr[r];
    //     if(sum == target){
    //         ans.push_back(l);
    //         ans.push_back(r);
    //     }   
    //     else if(sum > target){
    //         sum -= arr[r];
    //         r--;
    //     }
    //     else{ 
    //         sum -= arr[l];
    //         l++;
    //     }

    // }
    // for(int i=0; i<ans.size(); i++){
    //     cout << ans[i] << endl;
    // } 

    //2
    // vector<int> nums = {2,3,5,7,9};
    // int n = nums.size();
    // int count = 0;
    // sort(nums.begin(), nums.end());

    // for(int i=n-1; i>=2; i--){
    //     int l = 0, r = i-1;
    //     while(l<r){
    //         if(nums[l]+nums[r] > nums[i]){
    //             count += (r-l);
    //             r--;
    //         }
    //         else l++;  
    //     }
    // }

    // cout << count << endl;


    //3
    vector<int> sub = {3,8,2,3,1,9};
    int k = 3;
    int n = sub.size();

    int sum = 0, msum = INT_MIN;
    for(int i=0; i<k; i++){
        sum += sub[i];
    } 
    
    int l=0, r=k;
    while(l<n && r<n){
        msum = max(sum, msum);
        sum -= sub[l++];
        sum += sub[r];
    }

    cout << msum << endl;


    return 0;
}

//MEAL
//chinese food