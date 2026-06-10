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

int minVal = INT_MAX;
vector<int> v;
void chk(tree* root){
    if(!root)   return;
    chk(root->left);
    if(!v.empty()){
        minVal = min(minVal, abs(root->val - v.back()));
        v.push_back(root->val);
    }
    chk(root->right);
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

    v.push_back(root->val);
    chk(root);
    cout << minVal;
}