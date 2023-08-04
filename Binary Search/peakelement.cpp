#include<iostream>
#include<vector>
using namespace std;


int find_peak_element(vector <int> prr){
    int start=0;
    int end =prr.size()-1;
    int mid=start + (end-start)/2;
while(start<end){
    if(prr[mid]<prr[mid+1]){
        start=mid+1;
    }
    else if(prr[mid]>prr[mid+1]){
        end=mid;
        }

        mid=start+(end-start)/2;

    }

    return start;
}

int main(){


    vector <int> prr{0,10,11,5,2};

    int give_peak_element=find_peak_element(prr);

    cout<<"Peak element is "<<give_peak_element;

return 0;
}