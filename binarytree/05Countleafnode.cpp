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

int countLeafNode(node* root){
    if(root == NULL)
    return -1;
    int cnt = 0;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp->left == NULL && temp->right == NULL)
        cnt++;
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
    return cnt;
}

int main(){
    node* root = new node(2);
    root->left = new node(3);
    root->right = new node(4);
    root->left->left = new node(4);
    root->left->right = new node(3);
    int cnt = 0;
    int ans = countLeafNode(root);
    cout<<ans;
}