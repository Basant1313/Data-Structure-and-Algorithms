#include <iostream>
using namespace std;


class Node {
    public:

    int data;
    Node* next;

    Node (int data){

        this->data=data;
        this->next=NULL;

    }

};

void insert_at_head (Node* &head,Node* &tail,int data){
    // LL is empty
    if(head==NULL){

    Node* newNode = new Node(data);
    head=newNode;
    tail=newNode;

    return; // if you don't want to use return instead of that u can use if-else statement
    }

    // LL is not empty

    //step 1: create a new Node

    Node* newNode = new Node(data);

    //step 2 : Link the newNode ka next pointer to head node;

    newNode->next=head;

    //step 3: make new Node as head node
    head=newNode;
}

void insert_at_tail (Node* &head,Node* &tail,int data){
    // LL is empty
    if(head==NULL){
        Node* newNode = new Node(data);
        newNode=head;
        tail=newNode;
    return; // if you don't want to use return statement instead of that you can use if-else statement
    }

    // LL is not empty

    // step 1 : create a new node 
    Node* newNode= new Node(data);

    //step 2: link tail node next pointer to new Node
    tail->next=newNode;

    //step 3: make new Node as tail node
    tail=newNode;



}
int get_length(Node* &head){
    Node* temp=head;
    int length=0;

    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    return length;
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
    int len= get_length(head);
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


void print (Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



int main() {

    Node* head = NULL;
    Node* tail = NULL;

    insert_at_head(head,tail,10);
    insert_at_head(head,tail,20);
    insert_at_head(head,tail,30);
    insert_at_tail(head,tail,50);
    insert_at_tail(head,tail,50);
    insert_at_tail(head,tail,40);
    insert_at_position(6,head,tail,100);

    cout<<"Printing LL elements :"<<endl;
    print(head);


    return 0;

}