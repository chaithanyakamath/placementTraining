#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    int n = v.size();
    int m = v[0].size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<m; j++){
            // int temp = v[i][j];
            // v[i][j] = v[j][i];
            // v[j][i] = temp;

            swap(v[i][j], v[j][i]);
        }
    }

    for(int i=0; i<n; i++){
        auto curr = v[i];
        reverse(curr.begin(), curr.end());
        for(int j=0; j<m; j++){
            cout << curr[j] << "\t";
        }
        cout << endl;
    }
    return 0;
}