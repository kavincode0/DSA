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

node* minVal(node* root){
    if(root == NULL)
    return root;
    if(root->left)
    return minVal(root->left);
    else
    return root;
}

node* maxVal(node* root){
    if(root == NULL)
    return root;
    if(root-> right)
    return maxVal(root->right);
    else
    return root;
}

node* insertBST(node* &root, int d){
    if(root == NULL){
        root = new node(d);
        return root;
    }

    if(d>root->data){
        root->right = insertBST(root->right, d);
    }
    else
       root->left = insertBST(root->left, d);
    return root;
}

void takeInput(node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertBST(root, data);
        cin>>data;
    }
}

int main(){
    node* root = NULL;
    cout<<"Enter data to create BST: "<<endl;
    takeInput(root);
    cout<<minVal(root)->data;
    cout<<maxVal(root)->data;
}