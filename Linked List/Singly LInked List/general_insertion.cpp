#include <iostream>
using namespace std;


class Node {
    public:

        int data;
        Node* next; // Node* is basically an pointer which stores the address of next cell

        //CONSTRUCTOR
        Node(){
            this->data=0;
            this->next=NULL;
        }

        //CONSTRUCTOR
        Node (int data) {
            this->data=data;
            this->next=NULL;
        }

};



void print (Node* &head){
    Node* temp=head; // always remember always use temperory variable to manipulate linked list

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){

    //Creating the New Cell
    Node* first= new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);
    Node* fourth= new Node(40);
    Node* fifth= new Node(50);


    //Linking the Cell
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;


    cout<<"Printing of Linked List : "<<endl;
    print(first);



    return 0;
}
