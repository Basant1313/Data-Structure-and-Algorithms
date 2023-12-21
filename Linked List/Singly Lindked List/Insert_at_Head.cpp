#include <iostream>
using namespace std;

class Node {
    public: 

    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }


    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insert_at_head (Node* &head,int data){
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        
        return;//if you don't want to use return statement then use if-else statement
    }

    //If Node Already present

    //step 1: Create New Node

    Node* newNode= new Node(data);

    //step 2:Link newNode->next to head Node

    newNode->next=head;

    //Step 3 :Make newNode as Head Node
    head=newNode;
}


void print (Node* &head){
    
    Node* temp=head; // always create a temporary variable to manipulate the Linked List

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){

    Node* head=NULL;
    insert_at_head(head,10);
    insert_at_head(head,40);
    insert_at_head(head,30);
    insert_at_head(head,20);
    insert_at_head(head,50);

    cout<<"Printing the Linked List  : "<<endl;
    print(head);

    return 0;
}