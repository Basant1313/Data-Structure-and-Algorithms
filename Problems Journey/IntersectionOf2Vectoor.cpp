#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr{1,2,3,3,4,6,8};
    vector<int> brr{3,3,4,10};


    vector<int> ans;


    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                brr[j]=INT_MIN; // Ek baar number compare kar liya toh us number ko INT_MIN kar dega yaha jo pehla 3 hai usko INT_MIN taki baar baar compare karke double answer naa aaye
                ans.push_back(arr[i]);

            }
        }
    }



    for(auto value:ans)
    cout<<value<<" ";
    return 0 ;
}