#include<iostream>
#include<vector>
using namespace std;
//function defination and function declaration 
int find_firstoccurence(vector<int>v,int target){
    int start =0; // intitialzing index 0  in variable start
    int end=v.size()-1; // intializing index last in variable end
    int mid=start + (end-start)/2; //intializing mid index in variable mid
    int ans=-1; //intialize ans

    while(start<=end){
        if(target==v[mid]){
            ans=mid; // updating ans with index of target element found at 1st occurrrence
         end=mid-1;
  
        }
        else if(target<v[mid]){ 
            //left shift
            end=mid-1;
        }

        else if(target>v[mid]){
            // right shift
            start=mid+1;

        }
        mid=start+(end-start)/2; // upadting mid as after shifting left or right 
    }
    return ans;
}

int main(){

    //intializing vector
    vector <int> v{1,3,4,4,4,4,7,7,9};
    int target =4;

    int give_firstocuurence=find_firstoccurence(v,target); //funcation calling and and intializing in new variable
    cout<<"First Ocuurence is at index \n"<<give_firstocuurence;
    

    return 0;
}