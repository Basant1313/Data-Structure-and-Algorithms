#include<iostream>
#include<vector>
using namespace std;

int find_first_occurence(vector<int>trr,int target){
    int start =0;
    int end=trr.size()-1;
    int mid=start+(end-start)/2;
   int key =-1;
    while(start<=end){
        if(trr[mid]==target){
      key=mid;
        end=mid-1;

        }
        else if(trr[mid]>target){
        end=mid-1;
        }
        else if(trr[mid]<target){
        start=mid+1;
        }
    mid=start+(end-start)/2;
    }
    
return key;
}
int find_last_occurence(vector<int>trr,int target){
    int start =0;
    int end=trr.size()-1;
    int mid=start+(end-start)/2;
  int key=-1;
    while(start<=end){
        if(trr[mid]==target){
        key=mid;
        start=mid+1;

        }
        else if(trr[mid]>target){
        end=mid-1;
        }
        else if(trr[mid]<target){
        start=mid+1;
        }
    mid=start+(end-start)/2;
    }
return key;
}






int main(){

    vector <int> trr{1,3,4,4,4,4,4,4,7,9};
    int target=4;
    int give_first_occurence=find_first_occurence(trr,target);
    cout<<"First Occurnce "<<give_first_occurence<<endl;
    int give_last_occurence=find_last_occurence(trr,target);
    cout<<"last Occurnce "<<give_last_occurence<<endl;
    
    int total_occurence=give_last_occurence-give_last_occurence;
    cout<<total_occurence;

    return 0;
}

