#include <iostream>
using namespace std;

class Node {

    public:

    int data ;
    Node* next;

    // Default Constructor
    Node (){
        this->data=0;
        this->next=NULL;
    }

    //Parameterized Constructor 

    Node(int data ) {
        this->data=data;
        this->next=NULL;
    }



};


void print (Node* head ){
    
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}


Node* get_middle (Node* &head){
    
    // Linked List is empty
    if(head == NULL ){
        cout<<"Linked List is empty "<<endl;
        return head;
    }

    if(head->next == NULL){
        //Linked List has only 1 node
        return head;
    }

    Node* fast = head->next; // this is only the condition for even and odd case to find Middle Node
    Node* slow = head;

    while(slow != NULL && fast != NULL){
        fast=fast->next; // Moved only 1 step

        if(fast != NULL){ // check is fast node is NULL or not if its NULL then it fast->next will pointer points towards NULL which can cause (NULL Pointer Exception Error)
            
            fast=fast->next; // Moved second step
            slow=slow->next; // Slow will move only 1 step when fast Node moved 2 step

        }
    }

    return slow;

}

int main() {

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    first->next=second;
    second->next=third;
    third->next-fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL;

    print(first);
    // cout<<endl;

    cout<<"Middle Node of Linked List is : "<<get_middle(first)->data<<endl;


    return 0;
}