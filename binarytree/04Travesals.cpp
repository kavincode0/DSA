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

void Inorder(node* root){
    if(root == NULL)
    return ;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Postorder(node* root){
    if(root == NULL)
    return ;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

void Preorder(node* root){
    if(root == NULL)
    return ;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

int main(){
   node* root = new node(2);
    root->left = new node(3);
    root->right = new node(4);
    root->left->left = new node(4);
    root->left->right = new node(3);
    Inorder(root);
    cout<<endl;
    Preorder(root);
    cout<<endl;
    Postorder(root);
}