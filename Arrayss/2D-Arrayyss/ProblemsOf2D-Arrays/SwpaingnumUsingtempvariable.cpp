#include<iostream>
using namespace std;

// funtion defination and declaration 
void give_rev(int arr[],int start ,int end){
    while(start<=end){

    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=arr[start];

    start++;
    end--;
    }
}

int main(){
    int n;
    cout<<"Enter the Array Size";
    cin>>n;

    int arr[n]; //declaring array
        int start =0;
        int end =n-1;
        //intializing array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before Swaping"<<endl;
    for(auto ele:arr){
        cout<<ele<<" ";
        
    }
    cout<<endl;

    give_rev(arr,start,end); //function callling 

    cout<<"AFter Swaping"<<endl;
    for(auto elements:arr){
        cout<<elements<<" ";
    }

}