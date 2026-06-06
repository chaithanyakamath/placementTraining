#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int value){
            data = value;
            next = nullptr;
        }
};
class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            head = nullptr;
        }
        void insertAtEnd(int val){
            Node* newNode = new Node(val);

            if(head == nullptr){
                head = newNode;
                return;
            }
            Node* temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
        }

        void display(){
            if(head == nullptr){
                cout << "empty list" << endl;
                return;
            }
            Node* temp = head;
            while(temp != nullptr){
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "NULL"<< endl;
        }
        void deleteVal(int val){
            if(head == nullptr){
                cout << "empty list" << endl;
                return;
            }
            if(head->data == val){
                Node* temp = head;
                head = head->next;
                delete temp;
                cout << "deleted node val " << val << endl;
                return;
            } // to delete at begining
            Node* curr = head;
            Node* prev = nullptr;

            while(curr != nullptr && curr->data != val){
                prev = curr;
                curr = curr->next;
            }
            if(curr == nullptr){
                cout << val << " not found" << endl;
            }
            prev->next = curr->next;
            delete curr;
            cout << val << " deleted from list" << endl; // delete at end
        }
};


int main(){
    LinkedList l;

    l.insertAtEnd(10);
    l.insertAtEnd(20);
    l.insertAtEnd(30);
    l.insertAtEnd(40);
    l.deleteVal(10);
    l.display();

    return 0;
}