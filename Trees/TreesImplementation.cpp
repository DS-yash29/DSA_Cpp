#include<iostream>
using namespace std;


/*

Implementation of A BST
left node contains all the samller than the root node.
right node contains all the greater than the root node.
Inorder->preorder->postorder

*/
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int n){
        data = n;
        left = nullptr;
        right = nullptr;
    }
};

void inOrder(Node* root){
    if(root == nullptr){
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void addNode(Node* &root,int n){
    if(root == NULL){
        root = new Node(n);
        return ;
    }

    Node* t =  root;
    Node* check ;
    while(t!=NULL){
        if(t->data > n)
        {
            check = t;
            t = t->left;
        }
        else
        {
            check = t;
            t = t->right;
        }
    }
    if(check->data > n){
        check->left = new Node(n);
        return ;
    }
    check->right = new Node(n);


}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    
}


int main(){

    Node* root = nullptr;
    inOrder(root);
    addNode(root,4);
    inOrder(root);
    cout<<endl;
    addNode(root,1);
    addNode(root , 9);
    inOrder(root);
    cout<<endl;
    addNode(root,-17);
    addNode(root , -30);
    addNode(root , 16);
    addNode(root,27);
    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);

}