#include<bits/stdc++.h>
using namespace std;

//inline, const expr, const eval, auto -> compile time
//recurson - tail recursion , memoization

class Node{
    public:
        int val;
        Node* next;
        Node() : next(nullptr){};
        Node(int val){
            this->val = val;
            next = nullptr;
        }
};

void chk(Node* head){
    Node* temp = head;
    string store = "";
    while(temp){
        store += to_string(temp->val);
        temp = temp->next;
    }
    int n = store.length();
    int l = 0, r = n-1;
    while(l<r){
        if(store[l]!=store[r]){
            cout << "false";
            return;
        }
        l++; r--;
    }
    cout << "true";
}

int main(){
    Node* head = new Node();
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(1);

    head = n1;
    n1->next = n2;
    n2->next = n3;

    chk(head);

    return 7;
}