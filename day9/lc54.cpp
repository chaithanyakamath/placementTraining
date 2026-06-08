#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    int n = v.size();
    int m = v[0].size();

    vector<int> ans;
    int tl=0, tr=n-1, bl=0, br=m-1;

    for(int i=tl; i<=tr; i++){
        ans.push_back(v[i][tr]);
    }
    tl++;
    for(int i=tr; i<=br; i++){
        ans.push_back(v[br][i]);
    }
    for(int i=br; i>=bl; i--){
        ans.push_back(v[i][bl]);
    }
    for(int i=bl; i>=tl; i--){
        ans.push_back(v[tl][i]);
    }

    for(int n : ans)    cout << n << " ";
}