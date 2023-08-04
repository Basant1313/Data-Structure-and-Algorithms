#include<iostream>
#include<vector>
using namespace std;


//function declaration and function declaration  
int find_lastoccurenceIndex(vector<int> v,int target){
    int start=0; //intializing index 0 in variable start 
    int end=v.size()-1;//intialzing last index in variable in end
    int mid =start+(end-start)/2; //intialize mid index in variable mid
    int lo_index=-1; //updating according to condition

    while(start<=end){

        if(v[mid]==target){
            lo_index=mid;// updating lo_index with target last occurence index
            start=mid+1; // further checking to right that element is present or not and update its index

        }
        else if (target<v[mid]){
            //left shift
            end=mid-1;
        }
        else if (target>v[mid]){
            //right shift
            start=mid+1;     
               }
               mid=start+(end-start)/2;//updating mid after each left or right shift
    }
    return lo_index;
}

int main(){
// intilialize vector
vector<int> v{1,3,4,4,4,4,7,7,9};

int target=4;// findind last occurence of target

int give_lastoccurenceIndex=find_lastoccurenceIndex(v,target);//function calling and intialzing in  new variable
cout<<"Found Element at last occurence\t"<<give_lastoccurenceIndex<<" Index"<<endl;

return 0;
}