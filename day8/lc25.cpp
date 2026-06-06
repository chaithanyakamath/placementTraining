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
void rotate(Node* head, int k = 2){
    Node* curr = head;
    Node* nextNode = head->next;
    while(curr->next){
        Node* temp = curr;
        curr->next = 
    }
    
}