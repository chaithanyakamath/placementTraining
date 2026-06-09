#include<bits/stdc++.h>
using namespace std;

class tree{
    public:
        int val;
        tree *left;
        tree *right;
        tree(int x) : val(x), left(nullptr), right(nullptr){};
};

void display(tree* root){
    if(! root)  return;

    display(root->left);
    cout << root->val << " ";
    display(root->right);
}

void bfs(tree* root){
    if(!root)   return;
    queue<tree*> q;
    q.push(root);

    while(!q.empty()){
        tree* curr = q.front();
        q.pop();
        cout << curr->val << " ";
        if(curr->left != nullptr)   q.push(curr->left);
        if(curr->right != nullptr)   q.push(curr->right);
    }
}

int main(){
    tree* root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);
    root->left->left = new tree(4);
    root->left->right = new tree(5);

    // display(root);
    bfs(root);
    return 0;
}
