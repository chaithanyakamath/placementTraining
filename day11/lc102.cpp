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
            for(int i=0; i<n; i++){
                tree* curr = q.front();
                q.pop();
                cout << curr->val << "\t";
                if(curr->left != nullptr)   q.push(curr->left);
                if(curr->right != nullptr)   q.push(curr->right);
            }
            cout << endl;
            
        }
    }

int main(){
    tree *root = new tree(5);
    root->left = new tree(9);
    root->right = new tree(20);
    root->right->left = new tree(15);
    root->right->right = new tree(7);
    
    bfs(root);

    return 0;
}