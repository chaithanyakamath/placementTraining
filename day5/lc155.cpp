#include<bits/stdc++.h>
using namespace std;

class stak{
    private:
        stack<pair<int, int>> st;
    public:
        void push(int a){
            int m = st.empty() ? a : min(st.top().second, val);
            st.push({a, m});
        }
        void pop(){
            st.pop();
        }
        int getmin(){
            
        }
}

int main(){


    return  0;
}