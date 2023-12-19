#include <iostream>
using namespace std;

class Node {

    public: 

    int data;
    Node* next ;


    // Parameterized Constructor

    Node (int data) {
        this->data = data;
        this->next = NULL; 
    }



};

void remove_loop (Node* &head ){

    // step 1 : check looping is present or not 

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        // first step by fast  node
        fast = fast->next;

        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;


            if(slow == fast){
                // this step means loop is present 
                slow = head;
                
                break;
            }
        }

    }

    //step 2 : create a Node (prev) 
    Node* prev = fast;
    while(slow != fast ){
        // prev will be prev Node of Fast Node which is basically the last node of LL and linked to any node of LL and causing the loop problem 
        prev= fast;
        slow=slow->next;
        fast = fast->next;
    }
     // breaking the link or we can  say removing loop
    prev->next = NULL;
}

void print (Node* &head){
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main (){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(20);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eighth = new Node(80);
    Node* nineth = new Node(90);


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = nineth;
    nineth->next = fourth;

    remove_loop(head);

    print(head);

    return 0;
}