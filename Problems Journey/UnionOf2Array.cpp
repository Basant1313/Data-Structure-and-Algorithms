#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,3,5,7,9};
    int sizea=5;
    int brr[]={2,4,6,8};
    int sizeb=4;

    // vector created 
    vector <int> ans;

    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]); // inserting element of arr[] in vector (ans)
    }
    for(int i=0;i<sizeb;i++){
        ans.push_back(brr[i]); //inserting element of brr[] in vector (ans)
    }



     for(auto value:ans) // for auto automatically do all the work basically "auto = (int i=0 ;i<ans.size();i++)" 
     cout<<value<<" "; // print the elements of vector or its is basically a variable name which automically iterate all values of vector ans




  return 0;  
}