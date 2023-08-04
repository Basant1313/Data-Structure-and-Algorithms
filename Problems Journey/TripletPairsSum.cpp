#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr{10,20,30,40};

    int sum=70;
    //print all pairs
    //outer loop will traverse for each element
    for(int i=0;i<arr.size();i++){ 

        //for every element ,will traverse on next element as j=i+1 (i.e j will start from 20)
        for(int j=i+1;j<arr.size();j++){

        //for every element ,will traverse on next element as k=j+1 or k=i+2(i.e k will start from 30) 
            for(int k=j+1;k<arr.size();k++){
                if(arr[i]+arr[j]+arr[k]==80){
                    cout<<"Pair Found "<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                }
            }

        }
    }
    return 0;
}