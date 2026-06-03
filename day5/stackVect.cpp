#include<bits/stdc++.h>
using namespace std;

class stackk{
    private:
        vector<int> stk;
    public:
        void push(int a){
            stk.push_back(a);
        }
        void pop(){
            stk.pop_back();
        }
        void top(){
            int n = stk.size();
            cout << stk[n-1] << endl;
        }
};

int main(){
    stackk st;
    st.push(4);
    st.push(14);
    st.push(7);
    st.pop();
    st.top();
    st.pop();
    st.top();
    return 0;
}