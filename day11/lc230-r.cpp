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

int ans = -1;
bool found = false;
void chk(tree* root, int &k){
    if(!root || found)   return;

    chk(root->left,k);
    if(!found){
        k--;
        if(k==0)
        {   ans = root->val;
            found = true;
            return;
        }
    }  
    chk(root->right,k);
}

int main(){
    // tree *root = new tree(5);
    // root->left = new tree(4);
    // root->right = new tree(20);
    // root->right->left = new tree(15);
    // root->right->right = new tree(77);
    // root->right->left->left = new tree(7);
    // root->right->left->left->right = new tree(8);

    tree* root = new tree(5);
    tree bst;

    bst.insert(4,root);
    bst.insert(20,root);
    bst.insert(15,root);
    bst.insert(77,root);
    bst.insert(7,root);
    bst.insert(8,root);

    int k =3;
    chk(root, k);
    cout << ans;
    return 1;
}