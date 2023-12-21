#include <iostream>
using namespace std;

class Node {

    public: 

    int data;

    Node* next;


    // Parameterized Constructor

    Node (int data) {
        this->data=data;
        this->next=NULL;
    }

};


void print (Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void deletion (Node* &head, int node_data){

    // want to delete head node
    if(head->data == node_data)
{
    Node* temp =head;
    head= head->next;

    temp->next = NULL;

    delete temp;
    return;
}
    // Step 1: find prev and curr

    Node* prev = head;
    Node* curr = prev->next;
    // cout<<"curr : "<<curr->data<<endl;
   
    while(prev != NULL){
        prev=prev->next;
        curr=curr->next;

        if(curr->data == node_data){
            // step 2 :
            prev->next = curr->next;



        //step 3: break link
            curr->next =NULL;

            // step 4 : delete node
            delete curr;
        }
    }
    
}

int main (){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    head->next = second;
    second->next = third;
    third->next  = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    
    print(head);
    cout<<endl;
    deletion(head, 10);

    cout<<"After the deletion of Node : "<<endl;
    print(head);

    return 0;
}