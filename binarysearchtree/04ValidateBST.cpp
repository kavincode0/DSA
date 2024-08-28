#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* insertBST(int data, node* &root){
    if(root == NULL){
        root = new node(data);
        return root;
    }
    if(data>root->data){
        root->right = insertBST(data, root->right);
    }
    else
        root->left = insertBST(data, root->left);
    return root;
}

int main(){
     
}