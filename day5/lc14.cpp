#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> str = {"flower", "flow", "flight", "flowcadlee"};

    int n = str.size();

    sort(str.begin(), str.end());
    string ans;

    string chk1 = str[0];
    string chk2 = str[n-1];
    int minlen = min(chk1.size(), chk2.size());

    for(int i=0; i<minlen; i++){
        if(chk1[i]==chk2[i])    ans += chk1[i];
        else break;
    }
    cout << ans;
    return 0;
}