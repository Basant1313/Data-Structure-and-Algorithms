#include<iostream>
#include<vector>
using namespace std;

int main() {
    // int n;
    // cout<<"Enter the Size of Vector : ";
    // cin>>n;
    vector<int> v;

        cout<<"Enter the Elements in Vector :  "<<" ";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    for(auto arr:v)
    {
        cout<<arr<<" ";
    }




    

}