#include <iostream>
using namespace std;


class Node {

  public:
    int data;

    Node* next;

    //Default Constructor

    Node (){
        this->data=0;
        this->next=NULL;

    }


    //Parameterized Constructor 

    Node (int data ){
        this->data=data;
        this->next=NULL;


    }

};



void print (Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* get_middle (Node* &head){

    //Linked List empty
    if(head == NULL){
        cout<<"Linked List is empty"<<endl;
        return head;
    }

    if(head->next == NULL){
        //Linked List has one element only
        return head;
    }

    Node* slow = head;
    Node* fast = head; // this is only the condition for even and odd case to find Middle Node

    while(slow != NULL && fast != NULL){

        fast=fast->next; // Moved only 1step

        if(fast != NULL){ // checking fast node NULL or not if its NULL then fast->next will also pointer to NULL which can cause (NULL Pointer Exception)
            fast=fast->next;
            slow=slow->next;
        }


    }

    return slow;
}

int main (){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    


    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next = NULL;

    print(first);

    cout<<"Middle Node is : "<<get_middle(first)->data<<endl;

    return 0;

}