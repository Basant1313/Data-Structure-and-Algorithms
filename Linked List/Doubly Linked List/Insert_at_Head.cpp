#include <iostream>
using namespace std;

class Node {

public: 

int data;
Node* prev;
Node* next;

//Default constructor
Node () {

    this->data=0;
    this->prev=NULL;
    this->next=NULL;

}

//Parameterized  Constructor

Node (int data){

    this->data=data;
    this->prev=NULL;
    this->next=NULL;
}

};

void print (Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}

void insert_at_head (Node* &head,int data){

    //if LL is empty 

    if(head==NULL){

        Node* newNode = new Node(data);
        head=newNode;


        return; // if you don't want to use return statement you can use if-else statement
    }

    // LL is not empty


    //step 1: create a new Node
    Node* newNode =new Node(data);


    //step 2: Link the newNode->next pointer to head node
    newNode->next=head;

    //step 3: link the head->prev pointer to newNode 
    head->prev=newNode;

    //Make newNode as a head Node
    head=newNode;

}

int main(){


    Node* head = NULL;

    insert_at_head(head,10);
    insert_at_head(head,20);
    insert_at_head(head,30);

    cout<<"Printinf the elements of LL:  "<<endl;
    print(head);


    return 0;
}