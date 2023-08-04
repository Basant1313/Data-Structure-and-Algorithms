#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr {7,4,8,1,3,9};
    int n =arr.size();

    //selection sort 

    for(int i =0;i<n-1;i++){
        for(int j=i+1;j<n;j++){

            int minIndex=i;

            if(arr[j]<arr[minIndex]){
                minIndex=j;

            }
        swap(arr[i],arr[minIndex]);
        }


    }

    //printing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}