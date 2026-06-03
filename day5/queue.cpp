#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queee{
    private:
        vector<int>qu;
    public:
        void push(int a){
            qu.push_back(a);
        }
        void pop(){
            qu.erase(qu.begin(), qu.begin()+1);
        }
        void front(){
            cout << qu[0] << " ";
        }
};

int main(){
    Queee q;
    q.push(19);
    q.front();
    q.pop();
    q.push(9);
    q.push(99);
    q.front();
    return 0;
}