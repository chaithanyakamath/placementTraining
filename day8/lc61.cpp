#include<bits/stdc++.h>
using namespace std;

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
void rotateEle(Node* head, int k){
    Node* temp = head;
    int n = 1;
    while(temp->next){
        temp = temp->next;
        n++;
    }   
    k %= n;
    Node* curr = head;
    while(curr->next)   curr = curr->next;
    curr->next = head;

    int cnt = 1;
    while(cnt<n-k){
        head = head->next;
        cnt++;
    }    
    Node* ans = head->next;
    head->next = nullptr;
    
    while(ans){
        cout << ans->val << " " << endl;
        ans = ans->next;
    }    
    
}

int main(){
    Node* head = new Node();
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    rotateEle(head, 3);
    return 0;
}