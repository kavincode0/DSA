#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

pair<int, int> findHeight(node* root){
    if(root == NULL){
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> l = findHeight(root->left);
    pair<int, int> r = findHeight(root->right);
    
    pair<int, int> ans;
    ans.first = max(l.first, r.first) + 1;
    ans.second = max(ans.first, max(l.second, r.second));
    return ans;
}

int main(){
    node* root = new node(2);
    root->left = new node(3);
    root->right = new node(4);
    root->left->left = new node(4);
    root->left->right = new node(3);
    pair<int, int> ans = findHeight(root);
    cout<<ans.second;
}