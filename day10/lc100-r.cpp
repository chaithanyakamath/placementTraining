#include<bits/stdc++.h>
using namespace std;

class tree{
    public:
        int val;
        tree *left;
        tree *right;
        tree(int x) : val(x), left(nullptr), right(nullptr){};
};

string store = "true";
void chk(tree* root1, tree* root2){
    // if(!root1 && !root2)  return;
   if(store == "false")  return;
   if((!root1 && root2) || (root1 && !root2)){
        store = "false";
        return;
   } 
   if(root1->val != root2->val){
        store = "false";
        return;
   }
   chk(root1->left, root2->left);
   chk(root1->right, root2->right);
}

int main(){
    tree* root1 = new tree(1);
    root1->left = new tree(2);
    root1->right = new tree(3);
    root1->left->left = new tree(4);
    root1->left->right = new tree(5);

    tree* root2 = new tree(1);
    root2->left = new tree(2);
    root2->right = new tree(3);
    root2->left->left = new tree(4);
    
    chk(root1, root2);
    cout << store;
    return 0;
}