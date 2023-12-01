#include<iostream>
using namespace std;

/*
    Implementing A Singly Linked List By Creating a Node Class.
    Functions Such as :
    1. Insertion at head,middle,tail
    2. Deleting a tail.
    3. Traversing a Linked List. 
*/

// Creation of node class which consists of Data & Address of next node.
class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        this ->data=n;
        this->next = NULL;
    }
    // ~Node(){
    //     delete next;
    // }

};
// Print A Singly Linked List.
void printLL(Node* Head ){
    while(Head != NULL){
        cout<<Head->data<<" ";
        Head = Head->next;
    }cout<<" NULL ";
}

// Inserting a node at head position
void insertathead(Node* &head,int d){
    Node* newnode = new Node(d);
    newnode ->next = head;
    head = newnode;
}

// Inserting a node at last position
void insertattail(Node* &tail,int d){
    Node* temp = new Node(d);
    Node* t = tail;
    while(t->next != NULL){
        t = t->next;
    }
    t->next = temp;
    t = temp;
    
}

// Removal of a particular node of a particular position

void removeNode(Node* &Head,int pos){
    int i = 1;
    Node* temp = Head;
    if(pos==1){
        Head = Head->next;
        delete temp;
    }else{
    while(i<pos-1){
        temp = temp->next;i++;
    }
    Node* t = temp->next;
    temp->next = t->next;
    t = NULL;}
}

int main(){
    Node*  head = NULL;
    Node* tail = NULL;
    Node* n1 = new Node(1);
    tail = n1;
    printLL(n1);cout<<endl;
    insertathead(n1,4);
    insertattail(n1,9);
    for(int i = 4;i<=8;i++){
        if(i%2 == 0){
            insertathead(n1,i*i);
        }else{insertattail(n1,i*i);}
        
    }
    printLL(n1);
    insertattail(n1,81);
    cout<<"\n";printLL(n1);
    cout<<endl;
    removeNode(n1,3);
    printLL(n1);cout<<endl;
    removeNode(n1,1);
    printLL(n1);cout<<endl;
    removeNode(n1,7);
    printLL(n1);
}