#include <iostream>
#include <stack>

using namespace std;


int main () {


    // creatiion
    stack <int> st;

    // insertion
    st.push (10);
    st.push (20);
    st.push (30);
    st.push (40);
    st.push (50);

    // Checkting top element in stack as it is based on LIFO
    cout<<"Stack top Elelment is : "<<st.top()<<endl;

    cout<<"Size of the stack before the pop operation : "<<st.size()<<endl;

    //removeing
    st.pop();
    


    cout<<"After performing pop operation Stack Top element is "<<st.top()<<endl; 

    //checking the size of Stack

    cout<<"Size of the stack is :"<<st.size()<<endl;



    //checking stack is empty or not
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }

    else{
        cout<<"Stack is not empty "<<endl;
    }

    while (!st.empty()){

            cout<<st.top()<<" ";
            st.pop();
    }



return 0;
}