#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* createBinaryTree(node* root){
    int data;
    cout<<"enter data"<<endl;
    cin>>data;
    if(data == -1)
    return NULL;
    root = new node(data);
    cout<<"left"<<endl;
    root->left = createBinaryTree(root->left);
    cout<<"right"<<endl;
    root->right = createBinaryTree(root->right);
    return root;
}

int main(){
    node* root =  NULL;
    createBinaryTree(root);
}