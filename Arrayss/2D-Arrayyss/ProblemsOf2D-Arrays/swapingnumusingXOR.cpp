#include <iostream>
using namespace std;
//function defination and function declaration 
int revnum(int arr[],int start ,int end){
  while(start<=end){
    arr[start]=arr[start]^arr[end];  // reversing elements using XOR Operator 
    arr[end]=arr[start]^arr[end];
    arr[start]=arr[start]^arr[end];
    start ++;
    end--;

  } 
}

int main(){
  int arr[]={10,20,30,40,50,60};
  int sizea=6;
  int start =0; //intializtion of variable(start) of with variable index=0;
  int end=sizea-1; // intialization of variable(end) with variable index=sizea-1 which mean last element index number 
  
//printing elements of the array
  for(auto value :arr) 
    cout<<value<<" ";
  cout<<endl;
  //function calling
 revnum(arr,start,end);
cout<<"Reverse the element : "<<endl;
 for(auto values:arr)
 cout<<values<<" ";
}