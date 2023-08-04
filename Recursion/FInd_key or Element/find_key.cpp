#include <iostream>
using namespace std;
int find_key (int arr[],int n,int i,int key){

  // base case 
  if(i>=n){
    return -1;
  }
  int index;
  if(key==arr[i]){
  // cout<<i<<endl;
  return i;
  }
  find_key(arr,n,++i,key);
  
}
int main() {
int arr[]={9,6,4,3,1,7,3,};
  
  int n=sizeof(arr)/sizeof(int);
  int i=0;
  int key=1;

 int key_index= find_key(arr,n,i,key);
  cout<<key_index;
  
return 0;
}