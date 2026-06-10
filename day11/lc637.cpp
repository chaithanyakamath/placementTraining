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
};

void bfs(tree* root){
        if(!root)   return;
        queue<tree*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            double sum = 0;
            for(int i=0; i<n; i++){
                tree* curr = q.front();
                q.pop();
                sum += curr->val;
                if(curr->left != nullptr)   q.push(curr->left);
                if(curr->right != nullptr)   q.push(curr->right);
            }
        cout << (sum)/n <<  "\t";
    }
}
int main(){
    tree* root = new tree(5);
    tree bst;

    bst.insert(4,root);
    bst.insert(20,root);
    bst.insert(15,root);
    bst.insert(77,root);
    bst.insert(7,root);
    bst.insert(8,root);

    bfs(root);
    return 1;
}