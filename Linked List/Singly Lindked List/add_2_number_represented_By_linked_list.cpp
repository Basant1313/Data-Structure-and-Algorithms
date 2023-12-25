#include <iostream>
using namespace std;



class Node {

    public: 

    int data;
    Node* next;
    

    // Parameterized Constructor

    Node( int data){
        this->data  = data;
        this->next= NULL;
    }



};

void print (Node* head) {
    Node* temp = head;

    while(temp !=  NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* reverse (Node* head){

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    while( curr != NULL){

    forward = curr->next;

    curr->next = prev;
    prev = curr;
    curr = forward;
    } 


    return prev;
}


Node* solve (Node* &head1 , Node* &head2){

    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    
    // Step 1 : Reverse Both Linked List 
        head1 = reverse(head1);
        head2 = reverse(head2);


    // Step 2 : Add Both Linked List

        Node* ansHead = NULL;
        Node* ansTail = NULL;
        int carry = 0; 

    // if Both LL have same number of Nodes 

    while(head1 != NULL && head2 != NULL){

        int sum = carry + head1->data + head2->data;

        // find out digit to create node for
        int digit = sum % 10;

        // Calculate carry
        carry = sum/10;

        // create a new node for digit
        Node* newNode = new Node(digit);

        //attach the newNode into the answer wali linked list

        if(ansHead == NULL){
            // first Node insert kar rahe ho

            ansHead = newNode;
            ansTail = newNode;
        }
        else {
            ansTail->next = newNode;
            ansTail = newNode;
        }

        head1 = head1->next ;

        head2 = head2->next;

        
    }

    // if first Linked List contain moren number of node than second Linked List

    while(head1 != NULL){

        int sum = carry + head1->data;

        int digit = sum % 10;

        carry = sum / 10;

        Node* newNode = new Node(digit);

        ansTail->next = newNode;
        ansTail = newNode;

        head1 = head1->next; 
    }

    // when second Linked List has more number of node than the first Linked List

    while (head2 != NULL){
        int sum = carry + head2->data;

        int digit = sum % 10;

        carry = sum / 10;

        Node* newNode = new Node (digit);

        ansTail->next = newNode;
        ansTail = newNode;

        head2 = head2->next ;
    }

    // Handling carry alag se

    while (carry != 0){
        int sum = carry;
        int digit = sum %10;
        
        carry = sum /10;

        Node* newNode = new Node(digit);

        ansTail->next = newNode;
        ansTail= newNode;
    }

    ansHead = reverse (ansHead);
    return ansHead;
}

int main () {



    Node* head1 = new Node(2);
    Node* second1 = new Node(4);

    head1->next = second1;
    // second1->next= NULL;


    Node* head2 = new Node (2);
    Node* second2 = new Node (3);
    Node* third2 = new Node (4); 

    head2->next =  second2;
    second2->next=third2;
    // third2->next = NULL;


   Node* ans = solve (head1, head2);

   print(ans);




    return 0;
}