#include <iostream>
using namespace std;


class Node {

    public:

    int data;

    Node* prev;

    Node* next;


    //Default Constructor

    Node(){

        this->data=0;
        this->prev=NULL;
        this->next=NULL;
        
    }
   

   //parameterized constructor
    Node(int data){

        this->data=data;
        this->prev=NULL;
        this->next=NULL;

    }


};


void print (Node* &head ){

    Node* temp = head;

    while(temp!=NULL){

        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void insert_at_head (Node* &head,Node* &tail,int data){

    // Linked List is empty

    if(head == NULL){
        Node* newNode = new Node(data);

        head=newNode;

        tail=newNode;


        return;
    }

    //Linked List is Not empty

    //step 1: create new Node

    Node* newNode = new Node(data);

    //step 2: link newNode-> pointer to head node

    newNode->next = head;

    // step 3: link head -> prev pointer to newNode

    head->prev = newNode;


    //step 4: make newNode as a tail node

    head=newNode;

}

void insert_at_tail (Node* &head,Node* &tail,int data){

    // Linked List is Empty

    if(head == NULL){

        Node* newNode =new Node(data);
        
        head=newNode;

        tail=newNode;

        return; // if you don't want to use return statement instead of that you can use if - else statement
    }


    // Linked List Not empty

    //step 1: create a newNode

    Node* newNode = new Node(data);

    //step 2: link tail node next to newNode

    tail->next = newNode;

    //step 3: link newNode->prev to tail node

    newNode->prev = tail;

    //step 4: make newNode as tail Node

    tail=newNode;


}


int main () {

    Node* head = NULL;

    Node* tail = NULL;

    insert_at_head(head,tail,10);
    insert_at_tail(head,tail,20);
    insert_at_head(head,tail,30);
    insert_at_tail(head,tail,40);

    cout<<"Printing the elements of Linked List : "<<endl;
    print(head);

    return 0;
}


