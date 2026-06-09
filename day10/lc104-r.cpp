#include<bits/stdc++.h>
using namespace std;

class tree{
    public:
        int val;
        tree *left;
        tree *right;
        tree(int x) : val(x), left(nullptr), right(nullptr){};
};

int chk(tree* root){
    if(!root)   return 0;

    int left = chk(root->left);
    int right = chk(root->right);

    int res = 1 + max(left, right);
    return res;
}

int main(){
    tree* root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(2);
    // root->left->left = new tree(3);
    // root->left->right = new tree(4);
    // root->right->left = new tree(4);
    // root->right->right = new tree(3);

    // queue<pair<tree*,int>> qu;
    // qu.push({root,0});
    // int final = 0;
    // while(!qu.empty()){
    //     tree* curr = qu.front().first;
    //     int ans = qu.front().second;
    //     ans++;
    //     qu.pop();
    //     if(curr->left)  qu.push({curr->left,ans});
    //     if(curr->right)  qu.push({curr->right,ans});
    //     final = max(final, ans);
    // }
    // cout << final;

    int ans = chk(root);
    cout << ans;
    return 0;
}