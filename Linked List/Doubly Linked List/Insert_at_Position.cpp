#include <iostream>
using namespace std;

class Node {

    public: 
        int data;
        Node* prev;
        Node* next;


        // Default Constructor;

        Node () {
            this->data=0;
            this->prev=NULL;
            this->next=NULL;

        }

        //parametrized Constructor

        Node (int data) {
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


void insert_at_head (Node* &head,Node* &tail,int data){

    //LL is empty

    if(head==NULL){
        Node* newNode = new Node(data);

        head=newNode;

        tail=newNode;

        return; /// if you don't want to use return statement instead of that you can use if-else condition
    }

    // LL is not empty


    //step 1: create a new Node
    Node* newNode = new Node(data);

    //step 2: link newNode->next with head node
    newNode->next=head;

    //step 3: link head->prev with newNode
    head->prev=newNode;

    // make newNode as Head node
    head=newNode;
}


void insert_at_tail(Node* &head,Node* &tail,int data){

    // LL is empty

    if(head==NULL){

        Node* newNode = new Node(data);

        head= newNode;

        tail=newNode;

        return; // if you don't want to use return statement instead of that you can use if-else condition
    }

    // LL is not empty

    //step 1: create a new Node
    Node* newNode = new Node(data);

    //step 2:link tail->next with newNode
    tail->next=newNode;

    //step 3: link newNode->prev with tail node
    newNode->prev = tail;

    //step 4: make newNode as tail Node

    tail = newNode;



}

int get_length (Node* &head){
    int len = 0;
    Node* temp=head;

    while(temp!=NULL){
        temp=temp->next;
        len++;
    }

    return len;
    
}

void insert_at_position (int position,Node* &head,Node* tail, int data) {


    // LL is empty 
    if(head==NULL){
        Node* newNode = new Node(data);

        head=newNode;

        tail= newNode;

    }

    if(position==0){
        
        insert_at_head(head,tail,data);

    }

    int len = get_length(head); 
    if(position>=len){
        insert_at_tail(head,tail,data);
    }


    // step 1: find back and front
    int i=1;
    Node* back=head;
    while(i<position){

        back=back->next;

    }

        Node* front = back->next;


        // step 2 : create a new Node

        Node* newNode = new Node(data);

        //step 3: linking

        newNode->next=front;
        front->prev=newNode;

        back->next=newNode;
        newNode->prev=back; 

        
}


int main(){

    Node* head = NULL;
    Node* tail = NULL;

    insert_at_head(head,tail,10);
    insert_at_head(head,tail,20);
    insert_at_head(head,tail,30);
    insert_at_tail(head,tail,50);
    insert_at_tail(head,tail,40);
    insert_at_tail(head,tail,30);
    insert_at_position(1,head,tail,200);

        cout<<"Printing elements in Linked List : "<<endl;
        print(head);


    return 0;
}