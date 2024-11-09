#include <iostream> 
#include <stack>

using namespace std;

void insertAtBottom (stack <int> &s , int top){

    if(s.empty()){
        s.push(top);
        return;
    }

    int topElement = s.top();

    s.pop();

    insertAtBottom (s , top);

    s.push(topElement);


}


void reverse_stack(stack <int> &s){
    
    // base case
    if(s.empty()){

        return;

    }

    // top element 
        int top = s.top();
    //pop

    s.pop();

    // recursive call
    reverse_stack(s);

    insertAtBottom (s , top);
}


int main () {


    stack <int > s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);


    reverse_stack (s);

    while (!s.empty()){

        cout<< s.top()<<" ";
        s.pop();
    }
}