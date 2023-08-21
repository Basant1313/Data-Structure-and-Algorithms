#include <iostream>
using namespace std;

class Node {
    public:

        int data;
        Node* next;

        // parameterized constructor

        Node(int data){
            this->data=data;
            this->next=NULL;
        }

};
Node* reverse_recursion (Node* &prev,Node* &curr){

    // base case 
    if(curr==NULL){

        // yaha tak pahuch gaye matlab LL reverse ho chuko=i hai
        return prev;
    }

        // solve 1 case rest recursion handle
    
    Node* forward =curr->next;
    curr->next =prev;


    // as we already passing (curr,forward) so we don't need to write curr=forward
    reverse_recursion(curr,forward);
}

Node* reverse_Using_Loop(Node* head){
    Node* prev=NULL;
    Node* curr = head;

    while(curr!=NULL){
         Node* forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

void print (Node* head){
    Node* temp = head;  // always create temporary variable to do manipulation print never original variable

    while(temp!=NULL){
        
        cout<<temp->data<< " ";
    
        
        temp=temp->next;
    }
}


int main() {
    Node* head = new Node(10); 
    Node* second = new Node(20); 
    Node* third = new Node(30); 
    Node* fourth = new Node(40); 
    Node* fifth = new Node(50); 
    Node* sixth = new Node(60); 

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=NULL;

    Node* prev = NULL;
    Node* curr = head;

    print(head);
    cout<<endl;
    // head= reverse_Using_Loop(head);
    head=reverse_recursion(prev,curr);
    cout<<endl;
    print(head);

    


    return 0;
}
