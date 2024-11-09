#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector <int> nextSmallestElement (vector <int> input){

    // We want solve this question using optimal approach so we use stack and solve O(n) time complexity

    stack <int> s;

    // we are moving for RIGHT to LEFT so for last element there is no smallest element to its that why we will initially consider as -1 and push it in stack;
    s.push(-1);

    vector <int> ans(input.size());

    for (int i = input.size()-1; i>=0 ; i--){

        int curr = input[i];
       
        while(s.top() >= curr){

            s.pop();

        }

        // reach this means we got smaller element in the stack thann current element

        ans[i]=s.top();

        // after  this push that current element in the stack 
        s.push(curr);


    }


    
    return ans;
}


int main (){

    int n;
    cout<<"Enter the vector size"<<endl;
    cin>>n;

    cout<<"Enter the element you want in vector or array : ";

    int a;
    vector <int> v;

    for(int i = 0;i<n;i++){
        cin>>a;

        v.push_back(a);

    }


  vector <int> ans = nextSmallestElement(v);
    
   for (auto z : ans){
    cout<<z<<" ";
   }

    

    
return 0;
}