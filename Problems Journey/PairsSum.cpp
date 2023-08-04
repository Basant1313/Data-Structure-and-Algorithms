#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int> arr{10,20,40,60,70};

int sum = 80;
//print all pairs
//outer loop will traverse for each element 
for(int i=0;i<arr.size();i++){
    
    // for every element ,will traverse on next elements(i.e j will start from 20 and traverse on next elements)
   for (int j=i+1;j<arr.size();j++){

        if(arr[i]+arr[j]==sum){
            cout<<"Pair Fountd "<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}
return 0;
}