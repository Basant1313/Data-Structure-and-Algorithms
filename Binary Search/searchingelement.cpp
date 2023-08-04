#include<iostream>
#include<vector>
using namespace std;

int find_target(vector<int> v,int target){

    int start =0;
    int end = v.size()-1;
    int mid= start -(end-start)/2;
   
    while(start<=end){

        if(v[mid]==target){

          
        return mid;

    }

    else if(target<v[mid]){
         
         end=mid-1;
    }

    else if (target>v[mid]){
        start=mid+1;
    }

    mid=start + (end-start)/2;
    }

return -1;
}

int main (){

  vector <int> v{10,20,30,40,50,60,70,80,90};
    int target=40;
    
    cout<<find_target(v,target);
    int give_target=find_target(v,target);
    cout<<"Target Found "<<give_target <<" Index"<<endl;


    return 0;
}