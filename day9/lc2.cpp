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

void sum(Node* l1, Node* l2){
    Node* dummy = new Node();
    int carry = 0;
    
    while(l1->next && l2->next){
        int sum = l1->val + l2->val + carry;

        if(sum > 10){
            carry %= 10;
        }
        if(sum == 10){
            carry = 1;
        }

        dummy->next = sum;
        l1 = l1->next;
        l2 = l2->next;
    }
    while(l1->next){
        dummy->next = l1;
        l1 = l1->next;
    }
    while(l2->next){
        dummy->next = l2;
        l2 = l2->next;
    }
    while(dummy){
        cout << dummy->val << "->" << endl;
    }
}
int main(){
    Node* head1 = new Node();
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);

    head = n1;
    n1->next = n2;
    n2->next = n3;

    Node* head2 = new Node();
    Node* m1 = new Node(1);
    Node* m2 = new Node(2);
    Node* m3 = new Node(3);

    head2 = m1;
    m1->next = m2;
    m2->next = m3;

    sum(head1, head2);
    return 0;
}