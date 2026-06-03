#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    string s = "()";
    st.push(s[0]);

    for(int i=1; i<s.size(); i++){
        char ch = st.top();
        if(ch == '[' && s[i] == ']')  st.pop();
        else if(ch == '{' && s[i] == '}')  st.pop();
        else if(ch == '(' && s[i] == ')')  st.pop();
        else st.push(s[i]);
    }

    if(st.empty())  cout << true;
    else cout << false;
    return 0;
}