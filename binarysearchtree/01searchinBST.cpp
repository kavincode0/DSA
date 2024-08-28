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

void levelOrder(node* root){
    if(root == NULL)
    return ;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
}

node* searchNode(node* root,  int val){
    if(root == NULL || root->data == val){
        return root;
    }
    if(root->data<val){
        searchNode(root->right, val);
    }
    else
     searchNode(root->left, val);
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
    node* ans;
    ans = searchNode(root, 2);
    levelOrder(ans);
}