#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int find_Maxi(vector<int> arr){
  int start=0;
  int end=arr.size()-1;
  int mid=start+(end-start)/2;
  int ans=INT_MIN;

  while(start<end){
    if(arr[mid]>ans){
      ans=arr[mid];
    start++;}
    else if(arr[mid]<ans){
      end--;
    }
    mid=start+(end-start)/2;
  }
  
  
 return ans; 
}

int main(){
  vector<int> arr{1,2,3,4,5,6,7,8,9};

  cout<<find_Maxi(arr);
  // cout<<find_Mini(arr);
  
}