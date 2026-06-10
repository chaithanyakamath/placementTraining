#include<bits/stdc++.h>
using namespace std;

class tree{
    public:
    int val;
    tree *left;
    tree *right;
    tree() : left(nullptr), right(nullptr){}; // constructor for empty node
    tree(int v) : val(v), left(nullptr), right(nullptr){}; //constructor for node with val

    tree* insert(int n, tree* node){ 
        if(node == nullptr) return new tree(n);
        
        if(n < node->val)   node->left = insert(n,node->left);
        else node->right = insert(n,node->right); 
        return node;
    }

    void preOrder(tree* node){ //op is in sorted here
        if(!node)   return;
        cout << node->val << "\t";
        preOrder(node->left);
        preOrder(node->right);
    }
//write for bfs also, it's same as previous bfs's
    //     void bfs(tree* root){
    //     if(!root)   return;
    //     queue<tree*> q;
    //     q.push(root);

    //     while(!q.empty()){
    //         tree* curr = q.front();
    //         q.pop();
    //         cout << curr->val << " ";
    //         if(curr->left != nullptr)   q.push(curr->left);
    //         if(curr->right != nullptr)   q.push(curr->right);
    //     }
    // }
};

int main(){
    tree* root = new tree(5);
    tree bst;
    bst.insert(4,root);
    bst.insert(6,root);
    bst.insert(1,root);
    bst.insert(5,root);
    bst.insert(6,root);
    bst.insert(7,root);

    bst.preOrder(root);

    return 1;
}