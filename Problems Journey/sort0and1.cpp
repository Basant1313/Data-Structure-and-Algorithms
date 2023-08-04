#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr{1,0,0,1,1,0,0,1,1,0,1,0,1};

    int  start=0;
    int end =arr.size()-1;
    int i=0;

    while(i!=end){
        if(arr[i]==0){
            swap(arr[i],arr[start]); // swaping  ith element with start element if arr[i]==0
            start++;
            i++;
        }
        else{  //arr[i]==1  swap the ith element with end element 
            swap(arr[i],arr[end]); 
            end--;
        }

    }
    for(auto value : arr)
    cout<<value;

    return 0;
}