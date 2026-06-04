#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {100,45,101,99,43,98};
    unordered_set<int> st(v.begin(), v.end());

    int mcount = 1;
    for(auto it : st){
        int cur = it;
        int count = 1;
        if(st.count(cur)){
            while(st.count(cur+1)){
                cur++;
                count++;
            }
        }
        mcount = max(mcount, count);
    }
    cout << mcount;

    return 0;
}