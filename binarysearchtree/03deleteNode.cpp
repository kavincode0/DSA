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

node* deleteNode(int key, node* root){
    if(root == NULL){
        return root;
    }

    if(key < root->data){
        root->left = deleteNode(key, root->left);
    }

    else if(key > root->data){
        root->right = deleteNode(key, root->right);
    }
    
    else{
        // Case 1 and Case 2: Node with only one child or no child
        if(root->left == NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }

        else if(root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        
        // Case 3: Node with two children
        node* successor = minVal(root->right);
        root->data = successor->data;
        root->right = deleteNode(successor->data, root->right);
    }

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

int main(){
    node* root = NULL;
    cout<<"Enter data to create BST: "<<endl;
    takeInput(root);
    int key; 
    levelOrder(root);
    cout<<"enter key to be deleted: "<<endl;
    cin>>key;
    deleteNode(key, root);
    levelOrder(root);
}