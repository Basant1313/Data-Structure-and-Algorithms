// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseFirstKelement (queue <int> &q ,int k){

    stack <int> s;
    int count=0;
    int n = q.size();
    
    if(k<= 0 || k>n)
        return;
    
    while (!q.empty()){
        
        int temp = q.front();
        q.pop();
        
        s.push(temp);
        count++;
        
        if(count == k)
            break;
    }
    
    
    
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push (temp);
        
    }
    
    count = 0;
    
    while(!q.empty() && n-k !=0){
        
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;
        
        if(count == n-k)
            break;
        
    }
    
    
    
    

}
int main() {
   
   queue <int> q;
   int k = 3;
   q.push(3);
   q.push(6);
   q.push(9);
   q.push(12);
   q.push(15);
   
    reverseFirstKelement(q,k);
//    cout<<"After Recursion"<<endl;
   while(!q.empty()){
       cout<<q.front()<<" ";
       q.pop();
   }

    return 0;
}