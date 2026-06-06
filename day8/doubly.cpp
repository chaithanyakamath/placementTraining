#include<bits/stdc++.h>
using namespace std;

// template<typename T>
class Node{
    public:
        int val;
        Node* prev;
        Node* next;
        Node() : next(nullptr), prev(nullptr) {};
        Node(int val){
            this->val = val;
            next = nullptr;
            prev = nullptr;
        }
};
void display(Node* head){
    cout << "NULL<--->";
    while(head){
        cout << head->val << "<-->";
        head = head->next;
    }
    cout << "NULL";
}

void addToStart(Node* &head, int val){
    Node*   temp = new Node(val);
    temp->next = head;
    head->prev = temp;
    head = temp;
    display(head);
}

void addToEnd(Node* &head, int val){
    Node *start = new Node();
    start = head;
    while(head->next)   head = head->next;
    Node* temp = new Node(val);
    head->next = temp;
    temp->prev = head;
    head = start;
    display(head);
}

int main(){
    Node *head = new Node();
    Node *n1 = new Node(5);
    Node *n2 = new Node(6);
    Node *n3 = new Node(7);
    Node *n4 = new Node(8);

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = nullptr;

    display(head);
    cout << endl;
    addToStart(head, 4);
    cout << endl;
    addToEnd(head, 9);
    
    return 0;
}