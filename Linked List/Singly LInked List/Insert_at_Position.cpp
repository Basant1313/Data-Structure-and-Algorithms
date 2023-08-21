#include <iostream>
using namespace std;

class Node {

    public:

    int data;
    Node* next;

    Node () { //Default Constructor
        this->data=0;
        this->next=NULL;
    }

    Node(int data) {  // Parameterized Constructor
        this->data=data;
        this->next=NULL;
    }
};

void print (Node* &head) {
    Node* temp= head;

    while(temp!=NULL){
        cout<<temp->data<<" ";

        temp=temp->next;
    }
}




void insert_at_head(Node* &head,Node* &tail,int data){

    //if Linked List is empty

    if(head==NULL){
        Node* newNode = new Node(data);
        head=newNode;
        tail=newNode;

    }

    else {
        // Linked List is Not Empty

        // Step 1: Create New Node

        Node* newNode = new Node(data);

        // Step 2: Link newNode with head Node

        newNode->next = head;


        // Step 3: make newNode as head Node

        head=newNode;
        
    }
}



void insert_at_tail (Node* &head,Node* &tail,int data){

    // linked List is empty

    if(head==NULL){
        Node* newNode = new Node(data);

        head=newNode;
        tail=newNode;

        return ; // if you don't want to use return statement instead of that you can use if-else statement
    }

    // Linked List is not empty

    // Step 1: Create a newNode

    Node* newNode = new Node(data);

    // Step 2 : Link newNode with tail
    tail->next = newNode;


    // Step 3 : Make new Node as Tail
    tail=newNode;
}
int get_Length(Node* &head){

    int len=0;

    Node* temp= head;

    while(temp!=NULL){
        temp=temp->next;

        len++;

    }
    return len;
}
void insert_at_position (int position,Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail=newNode;

        return ;
    }

    if(position == 0){
        insert_at_head(head,tail,data);
    }
     //step 1: find back and front
    int len= get_Length(head);
    if(position>len){
        insert_at_tail(head,tail,data);
    }
    int i=1;
    Node* back=head;
    while(i<position){
        back=back->next;
        i++;
    }
    Node* front = back->next;

    //step 2 : create a new Node
    Node* newNode = new Node(data);

    // step 3: linking

    back->next=newNode;
    newNode->next=front;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insert_at_head(head,tail,10);
    insert_at_head(head,tail,20);
    insert_at_head(head,tail,30);
    insert_at_tail(head,tail,60);
    insert_at_tail(head,tail,50);
    insert_at_tail(head,tail,40);
    insert_at_position(1,head,tail,100);


    print(head);

    return 0;
}