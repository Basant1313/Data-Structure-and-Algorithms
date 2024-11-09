#include <iostream>
#include <stack>
using namespace std ;

void findSolution (stack <int> &s , int target){

    if( s.empty()){
         s.push(target);
        return;
    }

    int top = s.top();
    s.pop ();

    findSolution(s, target);

    s.push(top);

}


void insertAtBottom (stack <int> &s){


    if( s.empty()){

        return;
    }
    int target = s.top();

    s.pop();
    findSolution ( s , target);
    
}


int main () {

    stack <int> s ;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // while (!s.empty()){

    //     cout<< s.top()<<" ";
    //     s.pop();
    // }

    insertAtBottom (s);

   

     while (!s.empty()){

        cout<< s.top()<<" ";
        s.pop();
    }



    return  0;



}