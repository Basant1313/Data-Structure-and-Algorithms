#include <iostream>
using namespace std;

class Node {

    public: 

    int data;

    Node* next;


    Node (){
        this->data=0;
        this->next=NULL;
    }
    Node (int data){
        this->data=data;
        this->next=NULL;
    }

};




void insert_at_head (Node* &head,Node* &tail,int data){

    // If LL is empty;

    if(head==NULL){

        Node* newNode =new Node(data);

        head=newNode;

        tail= newNode;

        return; // if you don't want to use return statement then you can use if - else condition
    }


    // LL is not empty


    //step 1: create a new node
    Node* newNode = new Node(data);

    //step 2: link new node with head node
    newNode->next=head;

    //step 3: make new node as head node
    head=newNode;
}


void insert_at_tail (Node* &head,Node* &tail,int data){

    //if LL is empty
    
    if(head==NULL){

        Node* newNode = new Node(data);

        head= newNode;

        tail= newNode;

        return; // if you dont want to use return statement you can if- else condition
    }

    // LL is not empty

    //step 1:create a new Node 

    Node* newNode = new Node(data);

    //step 2: link new node with tail node

    tail->next = newNode;


    //step 3: make newNode as tail Node
    tail=newNode; 
}

int get_length (Node* head){
    int len=0;

    Node* temp=head;

    while(temp!=NULL){
        temp=temp->next;
        len++;
    }

    return len;
}

void insert_at_position(int position,Node* head,Node*tail,int data){

    if(head==NULL){
        insert_at_head(head,tail,data);
        return;
    }

    int len=get_length(head);
    cout<<len<<endl;

    if(position>len){
        insert_at_tail(head,tail,data);
    }


    //step 1: find prev and curr
    int i=1;

    Node* prev=head;

    while(i<position-1){
        
        prev=prev->next;
        
        i++;
    }
    Node* curr =prev->next;

    //step 2: create a new Node
    Node* newNode= new Node(data);

    // step 3 and step 4 are imp because we break prev->next then we will loosr track of entire LL so that's why we should break curr node and then prev node (specially in singly Linked List)
    

    //step 3: 
    newNode->next=curr;


    //step 4: 
    prev->next = newNode;


}

void print (Node* &head){
    
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main (){

    Node* head=NULL;
    Node* tail=NULL;

    insert_at_head(head,tail,10);
    insert_at_head(head,tail,20);
    insert_at_head(head,tail,30);
    insert_at_tail(head,tail,50);
    insert_at_tail(head,tail,40);
    insert_at_tail(head,tail,60);
    insert_at_position(1,head,tail,100);


    cout<<"Printing LL elements: "<<endl;
    print(head);
}