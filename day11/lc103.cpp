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

bool same = true;
void chk(tree* node){
    if(!node)   return;
    if(same == false)   return;

    int prev = node->val;
    if(node->left)
    {   if(prev >= node->left->val)     chk(node->left);
        else    same = false;
    }
    if(node->right)  
    {   if(prev < node->right->val)    chk(node->right);
        else    same = false; 
    }
    return;
}

int main(){
    tree *root = new tree(5);
    root->left = new tree(4);
    root->right = new tree(20);
    root->right->left = new tree(15);
    root->right->right = new tree(77);
    
    chk(root);
    cout << same;
    return 1;
}