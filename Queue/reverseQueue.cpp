// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
// Using Stack Approach
void reverseQueue (queue <int>& q){
    stack <int> s;
    
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        s.push(temp);
    }
    
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
}


// Using recursion Approach
void reversQueueRecursion(queue <int>& q){
    
    if(q.empty())
        return;
        
    
    int temp = q.front();
    
    q.pop();
    
    reversQueueRecursion(q);
    
    q.push(temp);
    
}


int main() {
   
   queue <int> q;
   q.push(3);
   q.push(6);
   q.push(9);
   q.push(2);
   q.push(8);
   
//   reverseQueue(q);
    reversQueueRecursion(q);
   cout<<"After Recursion"<<endl;
   while(!q.empty()){
       cout<<q.front()<<" ";
       q.pop();
   }

    return 0;
}