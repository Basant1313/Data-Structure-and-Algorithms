#include <iostream>
#include <stack>
# include <vector>

using namespace std;

vector <int> prevSmallestElement(vector <int> input){

    // In this we will solve using stack within the Time Complexity of O(n) but the catch here is we will move LEFT to RIGHT;

    stack <int> s;

    // As for left most element there is no smallest element so we will consider it -1 initially ans push -1 in stack
    s.push(-1);

    vector <int> ans (input.size());


    for (int i = 0; i<input.size(); i++){

        int curr = input[i];

        while (s.top()>= curr){
            s.pop();
        }

        // reach this line means we get smallest element -> store in the vector
        ans[i]=s.top();

        //push currrent element in the stack
        s.push(curr);

    }

    return ans;
}

int main(){

    int n,a;
    cout<<"Enter the size of vector: ";
    cin>>n;

    vector <int> v;
    cout<<"Enter the element you want in vector or array: ";
    for(int i =0;i<n;i++){
        cin>>a;

        v.push_back(a);

    }

    vector <int> ans = prevSmallestElement(v);

    for(auto y: ans){
        cout<<y<<" ";
    }
     


    return 0; 
}