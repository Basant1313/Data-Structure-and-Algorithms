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


void insert_at_head(Node* &head,Node* &tail,int data){
    
    if(head==NULL){
      Node* newNode= new Node(data);

      head=newNode;
      tail=newNode;

      return;

    }
  

    //step 1:Create New Node
    Node* newNode= new Node(data);

    //step 2: Link the newNode->next with head
    newNode->next=head;

    //step 3: Make newNode as Head
    head=newNode;


}       


void insert_at_tail(Node* &head,Node* &tail,int data){
    
    if(head==NULL){

        Node* newNode=new Node(data);
        
        head=newNode;
        tail=newNode;

        return ;
    }

    //step 1: Create New Node 

    Node* newNode= new Node(data);

    // step 2 :Link tail->next to newNode

    tail->next=newNode;

    //Step 3 : Make new node as tail
    tail=newNode;

}

void print(Node* &head ){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    insert_at_head(head,tail,10);
    insert_at_head(head,tail,20);
    insert_at_head(head,tail,30);
    insert_at_tail(head,tail,40);
    insert_at_tail(head,tail,50);
    insert_at_tail(head,tail,60);

    cout<<"Printing the Linked List : "<<endl;
    print(head);

    return 0;
}