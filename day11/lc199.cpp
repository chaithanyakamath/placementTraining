#include<bits/stdc++.h>
using namespace std;

class tree{
    public:
    int val;
    tree *left;
    tree *right;
    tree() : left(nullptr), right(nullptr){}; // constructor for empty node
    tree(int v) : val(v), left(nullptr), right(nullptr){}; //constructor for node with val
};

void bfs(tree* root){
        if(!root)   return;
        queue<tree*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            int vall = 0;
            for(int i=0; i<n; i++){
                tree* curr = q.front();
                q.pop();
                if(curr->left != nullptr)   q.push(curr->left);
                if(curr->right != nullptr)   q.push(curr->right);
                vall = curr->val;
            }
            cout << vall <<  "\t";
        }
    }

int main(){
    tree *root = new tree(5);
    root->left = new tree(1);
    root->left->right = new tree(2);
    root->left->right->right = new tree(3);
    // root->right->right = new tree(77);

    bfs(root);
}