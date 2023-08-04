#include<iostream>
using namespace std;

int find_targetindex(int arr[],int sizea ,int target){
    int start =0;
    int end=sizea-1;
    int mid=start +(end-start)/2;

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }

        else if(target<arr[mid]){
            end=mid-1;
        }

        else if(target>arr[mid]){
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
    return -1;
}

int main (){

    int arr[]={10,20,30,40,50,60,70,80,90};
    int sizea=sizeof(arr);
    int target =70;


    int give_targetindex=find_targetindex(arr,sizea,target);
    cout<<"Found Element at Index \t"<<give_targetindex;


    return 0;
}