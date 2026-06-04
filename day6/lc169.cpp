#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,3,3,3,3,2,2};
    int n = v.size();

    int count = 0, ele = 0;

    for(int n : v){
        if(count == 0){ //inital element
            ele = n;
            count = 1;
        }  
        if(ele!= n){ // different ele
            count--;
        }
        else    count++; //otherwise
    }
    cout << ele;
    return 0;
}