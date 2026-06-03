#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,3,5,1,8,3,9};
    int n = v.size();
    int l = 0, r = n-1;
    int maxArea = INT_MIN;

    while(l<r){
        int area = min(v[l], v[r])*abs(l-r);
        maxArea = max(maxArea, area);
        if(v[l]>v[r])   r--;
        else    l++;
    }
    cout << maxArea << endl;

    return 0;
}