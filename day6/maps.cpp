#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,string> mp;
    mp[1] = "apple";
    mp[2] = "chikku";
    mp[3] = "watermelon";

    mp.insert({4,"muskmelon"});
    mp.insert({5,"banana"});

    mp.erase(4);
    mp.erase(3);

    // mp.clear();

    int n = mp.size();
    for(auto n : mp) cout << n.first << " "<< n.second << endl;
    return 0;
}

//maps store frequency of elements
//uses key value pair
//ordered maintains accessending order of keys
//unordered maintains no order(random) of keys
// it stores values in pair of any datatype
// unordered uses hash map for its functionalities
//ordred - o(logn)