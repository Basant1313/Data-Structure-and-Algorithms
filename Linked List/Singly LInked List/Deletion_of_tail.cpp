#include <iostream>
using namespace std;

class Node {
    public:

    int data;
    Node* next;


    // parameterized constructor

    Node(int data){
        this->data=data;
        this->next= NULL;
    }


};
void print (Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

int get_length(Node* head){
    int length=0;
    Node* temp =head;

    while(temp != NULL){
        temp=temp->next;
        length++;
    }
    return length;
}

void deletion_of_tail (Node* &head){
    
    //  step 1: Find prev

    int len = get_length(head);
    cout<<len<<endl;
    int i=1;
    Node* prev = head;
    while(i<len-1){
        
        prev=prev->next;
        // cout<<prev->data<<" ";
        i++;
   }

    // step 2: store last node adress in temp
        Node* temp = prev->next;

    // step 3 : break link with last node which is temp in our case
    prev->next = NULL;

    

    // step 4 : delete temp;
    delete temp;
   


}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    head->next = second;
    second->next= third;
    third->next = fourth;
    fourth->next = NULL;

    deletion_of_tail(head);
    print(head);

    return 0;
}