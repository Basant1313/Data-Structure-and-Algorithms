#include <iostream> 
using namespace std;


class Node {

    public :

    int data;
    Node* next;


    // parameterized constructor

    Node (int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* return_starting_point_of_loop (Node* &head){

    // We will use slow-fast approach , tortorise approach , FCD -> (Flyod Cycle Detection)

    // Step 1: check looping present or not
        Node* slow= head;
        Node* fast = head;
    while(fast != NULL){
        fast=fast->next;
        if(fast != NULL){
            fast=fast->next;

            slow= slow->next;

            if(slow == fast){
                // this step reached means loop is present
                //Step 2 : reassign slow as head
                slow = head;

                break;
            }
        }
    }

    

    // Step 3 : the node where they meet again is the starting point of loop
    
    while(slow != fast){
        // step 
         slow= slow->next;
                fast=fast->next;
    }
    return slow; // we can return fast because both are same node;
}

int main(){
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

    cout<<"Starting point of Loop :  "<<return_starting_point_of_loop(head)->data<<endl;
    

    return 0;
}