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

void deletion_of_head (Node* & head) {
    // Step 1: Create a Temporary Node 
    Node* temp = head;

    // Step 2 : update head 
    head = head->next;

    // Step 3 : Break link with LL
    temp->next = NULL;

    // Step 4 : Delete
    delete temp;
}


void print (Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



int main() {

    Node* head = new Node (10);
    Node* second = new Node (20);
    Node* third = new Node (30);
    Node* fourth  = new Node (40);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;


    deletion_of_head(head);
    cout<<"Printing LL elements :"<<endl;
    print(head);


    return 0;

}