#include <iostream>
using namespace std;

class Node {

    public :

    int data ;

    Node* next;

    // Parameterized Constructor 

    Node (int data) {
        this->data = data;
        this->next = NULL;

    }
};

void print (Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void remove_duplicates(Node* &head){

     if( head == NULL) {
                cout << "LL is empty" << endl;
                return;
        }
        if(head -> next == NULL) {
                cout << "Single Node in LL" << endl;
                return ;
        }


    // Step 1 : create a Node mark it as Head node
    Node* curr = head;


    // Traverse the  Loop
    while(curr != NULL){

        //we know that curr != NULL as if its NULL LOOP will terminate but we don't know about curr->next is NULL or NOT NULL so before comparing the Node of the LL


        // Step 2 : start compareing

        // Nodes of LL are Equal
        if( (curr->next != NULL) && (curr->data == curr->next->data)){
            
            
            // break link and join link next to next Node
            Node* temp = curr->next;
            curr->next = curr->next->next;

            //Now Delete the Duplicate Node for Memory Management

            temp->next = NULL; // This is the Best Practice to make Node isolate when you to delete some Node;

            delete temp;
        }

        else {
            // Node are Not equal
            
            // shift curr to next Node
            curr = curr->next;
        }
    }
}

int main () {

    Node* head = new Node (10);
    Node* second = new Node (20);
    Node* third = new Node (20);
    Node* fourth = new Node (30);
    Node* fifth = new Node (30);
    Node* sixth = new Node (40);
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    print(head);
    cout<<endl;
    remove_duplicates(head);
    cout<<"After"<<endl;
    print(head);


    return 0;
}