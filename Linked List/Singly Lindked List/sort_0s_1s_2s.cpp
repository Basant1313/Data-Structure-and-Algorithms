#include <iostream>
using namespace std;


class Node {

    public :

    int data;
    Node* next;

    // Parameterized Constructor 

    Node (int data){
        this->data=data;
        this->next = NULL;
    }
};

void print (Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* sort_it (Node* &head){

    // if LL is Empty

    if(head == NULL){
        cout<<"Linked List is Empty "<<endl;
        return NULL;
    }

    if(head->next == NULL){
        cout<<"Linked List contain single Node "<<endl;
        return head;
    }

    // came to this line means LL > 1 Node

    // Step 1 : Create Dummy Node and intialize it with any Data you what

    // For Zeros  
    Node* zerosHead = new Node (-1);
    Node* zerosTail = zerosHead;

    // For Ones
    Node* onesHead = new Node(-1);
    Node* onesTail = onesHead;

    // For Twos
    Node* twosHead = new Node (-1);
    Node* twosTail = twosHead;


    // Step 2 : Traversing the original Linked List

    Node* curr = head;

    while(curr != NULL){

        if(curr->data == 0){
            Node* temp = curr;
            //curr is shifted to next node
            curr = curr->next;

            // isolating the temp
            temp->next = NULL;

            //appending the zero node in Dummy Node (zerosHead)
            zerosHead->next = temp;
            zerosTail =temp;
        }
        if(curr->data == 1){
            Node* temp = curr;
            //curr is shifted to next node
            curr = curr->next;

            // isolating the temp
            temp->next = NULL;

            //appending the zero node in Dummy Node (zerosHead)
            onesHead->next = temp;
            onesTail =temp;
        }
        if(curr->data == 2){
            Node* temp = curr;
            //curr is shifted to next node
            curr = curr->next;

            // isolating the temp
            temp->next = NULL;

            //appending the zero node in Dummy Node (zerosHead)
            twosHead->next = temp;
            twosTail =temp;
        }
    }

    // Modifying onesHead

       Node*  temp = onesHead;
       onesHead = onesHead->next;
       temp->next = NULL;
       delete temp; // memory management
    
    // Modifying twosHead

       Node*  temp = twosHead;
       twosHead = twosHead->next;
       temp->next = NULL;
       delete temp; // memory management

       
       


}

int main (){

    Node* head = new Node (1);
    Node* second = new Node (1);
    Node* third = new Node (2);
    Node* fourth = new Node (2);
    Node* fifth = new Node (0);
    Node* sixth = new Node (0);

    head->next =second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    print(head);

    return 0;
}