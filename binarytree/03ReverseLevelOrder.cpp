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

void reverseLevelOrder(node* root){
    if(root == NULL)
    return ;
    stack<int> s; 
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
        s.push(temp->data);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
    node* root = new node(2);
    root->left = new node(3);
    root->right = new node(4);
    root->left->left = new node(4);
    root->left->right = new node(3);
    reverseLevelOrder(root);
}