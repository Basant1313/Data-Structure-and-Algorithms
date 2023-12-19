#include <iostream>
using namespace std;


class Node {

    public :

    int data;
    Node* next;

    // parameterized Constructor

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

};

bool check_looping (Node* &head){

    // we will use Slow-Fast Approach , Tortorise Approach , FCD -> (Flyod Cycle Detection)

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL) {

        //first step by fast
        fast=fast->next;

        // checking that if fast is pointing to NULL or not if its not pointing to NULL then only we will take second step and by taking second step by fast then slow will take its first step
        if(fast != NULL){
            //second step by fast
            fast = fast->next;

            // if fast have taken two step then only slow will take its first step
            slow = slow->next;

            if(slow == fast){
                return true;
            }

        }

    
        // if came to this line that means there is no Looping in the Linked List

    } 
        return false ;
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
    
  

    bool check = check_looping(head);
    cout<<"Linked List is Looped : " <<check;

    return 0;
    
}
