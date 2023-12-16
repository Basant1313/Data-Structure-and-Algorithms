#include <iostream>
using namespace std;

class Node {

    public:

    int data;
    Node* next;


    // parameterized COnstructor

    Node (int data) {
        this->data = data;
        this->next = NULL;
    }

};

void print(Node* &head){
    Node* temp = head; // always create a temporary Node to do manupiulation in head Node
    while(temp != NULL){
        cout<<temp->data << " ";
        temp=temp->next;
    }
}
int get_length(Node* &head){
    int length=0;
    Node* temp =head;
    while(temp != NULL){
        temp=temp->next;
        length++;
        
    }
    return length;
}

Node* reverse_K_group (Node* &head ,int k ){
    if(head == NULL){
        cout<<"Linked List is empty"<<endl;
    }
    int len = get_length(head);
    if(k>len){
        return head;
    }

    Node* prev = NULL;
    Node* curr =head;
    Node* forward = curr->next;

    int count =0; // to count the iteration


    // step 1 : Reverse K-Groups of Nodes
    while(count < k){
        forward= curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }

    // step 2 : solve remaining node reverse with the help of recursion and link it to head node
    // here (forward) is head Node of remaining Node to reverse
    if(forward != NULL){

    head->next=reverse_K_group(forward,k);
    }

    // Step 3 : Return the head of entire Linked List after reversing which is in our case is prev (which can proved using dry run)

    return prev;
     
}

int main(){
    Node* head = new Node(10);
    Node* second= new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    print(head);
    cout<<"After Reversing of K-Group : "<<endl;
    head=reverse_K_group(head,3);
    print(head);


    return 0;
}