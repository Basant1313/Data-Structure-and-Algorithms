#include <iostream>

using namespace std;


//  There are two method to create the stack 
// 1-> using array 
// 2-> using Linked List 

class stack {

    public:

    int *arr;
    int size;
    int top;


    // Parameterized Constructor

    stack(int size) {
        arr = new int[size];
        this->size = size;
        top = -1;

    }

    void push(int data){

        if(size-top>1){
            top++;
            arr[top]= data;
         }

         else {
            cout<<"Stack Overflow "<<endl;
         }



    }

    void pop(){

        if(top == -1 ){
            cout<<"Stack Underflow"<<endl;
        }

        else {
            top--;
        }

    }

    int gettop(){

        if(top == -1){
            cout<<"There is element in stack"<<endl;
        }

        else {
            
            return arr[top];
        }

    }

    int getsize(){

        return top+1;

    }

    bool isempty(){

        if(top == -1){
            return true;
        }

        else {
            return false;
        }

    }


};


int main (){


    // Creation
    stack s(5);
    

    // Insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

  cout<<"Top Element is : "<<s.gettop()<<endl;

    // removing
    s.pop();

  cout<<"Top Element is : "<<s.gettop()<<endl;

  cout<<"Size of stack is :"<<s.getsize()<<endl;

  while(!s.isempty()){
    cout<<s.gettop()<<" ";
    s.pop();
  }


return 0;
}