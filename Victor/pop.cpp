#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr;


        arr.push_back(5);
        arr.push_back(8);
        arr.pop_back();

        cout<<arr.size()<<endl; // size =elements are present in vector
        cout<<arr.capacity()<<endl; // capacity = total number of blocks in which elements can be filled
        cout<<arr.empty()<<endl; // to verify that vector is empty or not if it show 0= false or 1= true

    for(int i=0;i<arr.size();i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}